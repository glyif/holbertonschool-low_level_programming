#include "lists.h"

/**
 * list_len - length of a list
 * @head: head of the list
 * Return: length of the list
 */
unsigned int list_len(listint_t *head)
{
	int i;

	for (i = 0; head->next != NULL; i++)
		head = head->next;

	return (i);
}

/**
 * get_nodeint_at_index - fetches a node at a given point
 * @head: head of a list
 * @index: index of where to add node
 *
 * Return: struct pointer to new node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	unsigned long len, i;

	tmp = head;

	len = list_len(tmp);

	if (len < index)
		return (NULL);


	for (i = 0; i < index; i++)
		tmp = tmp->next;

	if (i == index)
		return (tmp);
	else
		return (tmp);

}
