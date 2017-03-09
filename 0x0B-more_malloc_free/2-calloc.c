#include <stdlib.h>

/**
 * calloc - allocate memory
 * @nmemb: number of arrays
 * @size: size each
 *
 * Return: pointer to memory or NULL
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ar = calloc(nmemb, size);
	
	return(ar);
}
