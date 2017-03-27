#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a linked list with integer data
 *
 * @h: head of the list
 * Return: how many nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);

}
