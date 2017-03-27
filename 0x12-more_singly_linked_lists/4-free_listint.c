#include "lists.h"

/**
 * free_listint - frees linked list with integer data
 * @head: head of the list
 *
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
	else
	{
		return;
	}
}
