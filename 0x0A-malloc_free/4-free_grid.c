#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees grid created by previous
 * @grid: pointer of a pointer to the grid
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
