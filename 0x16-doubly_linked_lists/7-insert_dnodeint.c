#include "lists.h"

/**
 * create_node_at - creates node
 * @prev: prev node
 * @next: next node
 * @n: integer value
 *
 * Return: pointer to new node
 */
dlistint_t *create_node_at(dlistint_t *prev, dlistint_t *next, int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->prev = prev;
	node->next = next;
	node->n = n;

	if (prev != NULL)
		prev->next = node;

	return (node);
}

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: head of list
 * @idx: index to insert at
 * @n: value to hold
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp, *new;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		if (*h == NULL)
			*h = create_node_at(NULL, NULL, n);
		else
			*h = create_node_at((*h)->prev, *h, n);
		return (*h);
	}

	tmp = *h;

	for (i = 0; i < idx; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new = create_node_at(tmp, tmp->next, n);
	return (new);
}
