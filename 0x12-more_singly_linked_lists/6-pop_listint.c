#include "lists.h"

/*
 * pop_listint - deletes head node and returns data
 * @head: address of head of list
 *
 * Return: int data of node
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
