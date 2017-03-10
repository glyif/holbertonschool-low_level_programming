#include <stdlib.h>

/**
 * _calloc - allocate memory
 * @nmemb: number of arrays
 * @size: size each
 *
 * Return: pointer to memory or NULL
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);

	cpy = ar;

	for (i = 0 ; i < nmemb * size; i++)
		ar[i] = 0;

	return (ar);
}
