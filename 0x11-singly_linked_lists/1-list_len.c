#include "lists.h"

/**
 * list_len - gets length of the list
 * @h: pointer to the beginning of the list
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);

}
