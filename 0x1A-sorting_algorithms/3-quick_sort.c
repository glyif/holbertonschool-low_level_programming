#include "sort.h"

/**
 * swap - swaps two integers
 *
 * @curr: current pointer
 * @next: nextpointer
 */
void swap(int *curr, int *next)
{
	int tmp;

	tmp = *curr;
	*curr = *next;
	*next = tmp;
}

/**
 * partition - partitions the array
 *
 * @array: array
 * @wall: wall
 * @pivot: pivot
 * @size: size of array
 *
 * Return: new pivot for partition
 */
int partition(int *array, int wall, int pivot, size_t size)
{
	int j;
	int i;
	int pi = array[pivot];

	i = (wall - 1);

	for (j = wall; j <= pivot - 1; j++)
	{
		if (array[j] <= pi)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[pivot]);
	print_array(array, size);

	return (i + 1);
}

/**
 * real_quick_sort - quicksort with lomuto partition
 * recursively calls itself
 *
 * @array: array
 * @wall: wall inext
 * @pivot: pivot index
 * @size: size
 */
void real_quick_sort(int *array, int wall, int pivot, size_t size)
{
	int pi;

	if (wall < pivot)
	{
		pi = partition(array, wall, pivot, size);

		real_quick_sort(array, wall, pi - 1, size);
		real_quick_sort(array, pi + 1, pivot, size);
	}
}

/**
 * quick_sort - quick sort sorting Lomuto partition scheme
 *
 * @array: array of integers
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	int wall, pivot;

	if (array && size > 1)
	{
		wall = 0;
		pivot = (size - 1);

		real_quick_sort(array, wall, pivot, size);
	}
}
