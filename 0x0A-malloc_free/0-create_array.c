#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;
	
	ar = malloc(size * sizeof(char));
	
	if (ar == NULL)
		return (NULL);
	
	for (i = 0; i <= size; i++)
		ar[i] = c;

	return (ar);

}
