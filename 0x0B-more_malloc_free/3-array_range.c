#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: start of array
 * @max: end of array
 *
 * Return: pointer to new array or NULL
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;


	return (ar);
}
