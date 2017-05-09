#include "lists.h"

/**
 * free_node - frees a node
 * @node: node to free
 */
void free_node(dlistint_t *node)
{
	if (node->next != NULL)
		(node->next)->prev = node->prev;

	if (node->prev != NULL)
		(node->prev)->next = node->next;

	free(node);
}

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: pointer to head of list
 * @index: index to delete
 *
 * Return: 1 if succeed, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = tmp->next;
		free_node(*head);
		*head = tmp;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	free_node(tmp);

	return (1);
}
