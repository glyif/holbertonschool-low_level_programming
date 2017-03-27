#include "lists.h"

/**
 * listint_len - returns length of list
 *
 * @h: head of the list
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);

}
