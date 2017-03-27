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

/**
 * free_listint2 - frees list and sets head to NULL
 * @head: address of head of the list
 *
 */

void free_listint2(listint_t **head)
{

	free_listint(*head);

	*head = NULL;

}
