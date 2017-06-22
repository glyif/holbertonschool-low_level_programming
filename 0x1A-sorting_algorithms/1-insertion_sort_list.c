#include "sort.h"

/**
 * find_head - traverses to the head of the linked list
 * @p: pointer to a node in the list
 *
 * Return: pointer to the head of the linked list
 */
listint_t *find_head(listint_t *p)
{
	while (p->prev)
		p = p->prev;

	return (p);
}


/**
 * insertion_sort_list - insertion sort for dll
 *
 * @list: pointer to doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *wait, *tmp, *tmp2;

	if (list == NULL)
		return;

	tmp = *list;
	tmp = tmp->next;

	while (tmp != NULL)
	{
		wait = tmp->next;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp2 = tmp->prev;
			tmp2->next = tmp->next;
			tmp->prev = tmp2->prev;
			tmp2->prev = tmp;
			tmp->next = tmp2;

			if (tmp2->next != NULL)
				tmp2->next->prev = tmp2;

			if (tmp->prev != NULL)
				tmp->prev->next = tmp;

			print_list(find_head(*list));
		}
		tmp = wait;
	}

	*list = find_head(*list);
}
