#include <stdlib.h>

/**
 * malloc_checked - malloc and exit
 * @b: amount to allocate
 *
 * Return: pointer to located memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);

	if (ar == NULL)
		exit(98);

	return (ar);
}
