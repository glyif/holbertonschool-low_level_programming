#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min:
 * @max:
 *
 * Return: pointer to new array or NULL
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int cpy;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));

	for(i = 0, cpy = min; cpy <= max; i++, cpy++)
		ar[i] = cpy;

	return(ar);
}
