#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given point
 * @head: address of the head of the list
 * @idx: index where node should be inserted
 * @n: data to insert into node
 *
 * Return: struct pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *tmp, *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	tmp = *head;

	for (i = 0; i < idx - 1; i++)
		tmp = tmp->next;

	new->n = n;
	new->next = tmp->next;

	tmp->next = new;

	return (new);

}

