#include "sort.h"

/**
 * swap - swaps two integers
 * 
 * @curr: current pointer
 * @next: next pointer
 */
void swap(int *curr, int *next)
{
    int tmp;
	tmp = *curr;
    *curr = *next;
    *next = tmp;
}

/**
 * bubble_sort - bubble sorting algorithm (no optimization)
 * 
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int *curr;
	int *next;

	i = 0;

	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			curr = &array[j];
			next = &array[j + 1];

			if (*curr > *next)
				swap(curr, next);
			j++;
		}
		print_array(array, size);
		i++;
	}
}
