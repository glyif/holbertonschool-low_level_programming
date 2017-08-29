#include "search_algos.h"

/**
 * binary_search - binary search
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (rec_binary_search(array, size, value));
}

/**
 * print_array - prints an int array
 * @array: array to print
 * @size: size of array
 *
 * Return: nothing
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");

	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * rec_binary_search - binary search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value or -1
 */
int rec_binary_search(int *array, size_t size, int value)
{
	size_t middle;
	int index;

	index = -1;

	if (size == 1)
		return (-1);

	middle = size / 2;
	print_array(array, size);

	if (array[middle - 1] > value)
		index = rec_binary_search(array, size / 2, value);
	else if (array[middle + 1] < value)
		index = rec_binary_search(array + middle, size / 2, value);
	else if (array[middle] == value)
		index = (int)middle;

	return (index);
}
