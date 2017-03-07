#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **ar;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = calloc(height, sizeof(*ar));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		ar[i] = calloc(width, sizeof(int));

	return (ar);
}
