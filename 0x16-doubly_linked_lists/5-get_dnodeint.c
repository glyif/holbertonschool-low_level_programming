#include "lists.h"

/**
 * get_dnodeint_at_index - gets pointer at index
 * @head: pointer to head of list
 * @index: index to get
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
