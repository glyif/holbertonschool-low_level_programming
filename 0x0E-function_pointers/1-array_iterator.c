#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
