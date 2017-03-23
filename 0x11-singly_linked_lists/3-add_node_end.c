#include "lists.h"
#include <string.h>

/**
 * _strlen_c - length of a string
 * @s: string
 *
 * Return: length of the s
 */

size_t _strlen_c(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * add_node_end - adds node to the end of the list
 * @head: the head node
 * @str: string to copy into new node
 *
 * Return: new node at the end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	tmp = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (tmp == NULL)
		return (NULL);

	if (*head != NULL)
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new;
	}
	else
		*head = new;

	new->str = strdup(str);
	new->len = _strlen_c(str);
	new->next = NULL;

	return (new);
}
