#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets length of list
 * @head: head of the list
 *
 * Return: length of the list
 */

unsigned int list_len(listint_t *head)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
		head = head->next;

	return (i);
}

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: address of head of list
 * @index: index fo the node to delete
 *
 * Return: 1 if succeded -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len, i;

	listint_t *tmp, *prev_delete;

	tmp = *head;

	len = list_len(*head);

	if (*head == NULL || index > len)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;

		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		tmp = tmp->next;

	prev_delete = tmp->next;

	tmp->next = prev_delete->next;

	free(prev_delete);

	return (1);
}
