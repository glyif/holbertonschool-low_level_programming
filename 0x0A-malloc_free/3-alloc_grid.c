#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates 2d array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer of a pointer for the array
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(*ar));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
