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
 * bubble_sort - bubble sorting algorithm (optimized)
 *
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int flag;
	int *curr;
	int *next;

	i = 0;

	while (i < size - 1)
	{
		flag = 0;
		j = 0;
		while (j < size - i - 1)
		{
			flag = 1;
			curr = &array[j];
			next = &array[j + 1];

			if (*curr > *next)
				swap(curr, next);
			j++;
		}

		if (flag == 0)
		{
			return;
		}
		print_array(array, size);
		i++;
	}
}
