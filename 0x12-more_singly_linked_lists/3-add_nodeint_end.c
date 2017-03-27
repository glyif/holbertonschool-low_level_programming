#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a list
 *
 * @head: address of the head of a node
 * @n: integer data in the node
 *
 * Return: struct pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new;
	}
	else
	{
		*head = new;
	}

	new->next = NULL;
	new->n = n;

	return (new);
}
