#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: pointer to the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *curr;

	curr = NULL;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = curr;
		curr = *head;
		*head = tmp;
	}

	*head = curr;

	return (*head);

}
