#include "lists.h"

/**
 * pop_listint - delete head node and returns data
 * @head: address of the pointer to the head of the node
 *
 * Return: int data of head node
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;

	i = (*head)->n;

	*head = (*head)->next;

	free(tmp);

	return (i);

}
