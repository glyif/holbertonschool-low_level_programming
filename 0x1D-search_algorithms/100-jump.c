#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search
 * @array: array of int
 * @size: size of array
 * @value: value to find
 *
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step, n;

	n = 0;
	step = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[step - 1] < value)
	{
		n = step;
		step += sqrt(size);
	}

	while (array[n] < value)
		n++;

	if (array[n] == value)
		return (n);

	return (-1);
}
