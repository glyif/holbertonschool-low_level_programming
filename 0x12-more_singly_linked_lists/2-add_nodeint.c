#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of the list
 *
 * @head: address of the head of the list
 * @n: integer stored in the node
 *
 * Return: struct pointer to the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->next = *head;

	new->n = n;

	*head = new;

	return (new);

}
