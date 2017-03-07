#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - malloc empty array
 * @size: size of array
 * @c: character
 *
 * Return: pointer to malloced array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		ar[i] = c;

	return (ar);

}
