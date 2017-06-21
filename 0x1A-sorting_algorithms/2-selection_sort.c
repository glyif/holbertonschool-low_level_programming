#include "sort.h"

/**
 * selection_sort - selection sort (not optimized)
 *
 * @array: array of integers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int wait;
	size_t i, j, min;

	if (array == NULL || size <= 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			wait = array[i];
			array[i] = array[min];
			array[min] = wait;
			print_array(array, size);
		}
	}
}
