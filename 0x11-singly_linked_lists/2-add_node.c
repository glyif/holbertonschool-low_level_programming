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
 * add_node - creates a new node and makes it head
 * @head: pointer to pointer of the head of the list;
 * @str: string to input
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *tmp;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	tmp->next = *head;

	tmp->str = strdup(str);

	tmp->len = _strlen_c(str);

	*head = tmp;

	return (tmp);
}
