#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sums
 * @a: array
 * @size: size of array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int total;

	total = 0;

	for (i = 0; i < size; i++, a = a + size)
	{

		total = total + *(a + i);

	}
	printf("%d, ", total);

	a = a - size;

	total = 0;

	for (i = 0; i < size; i++, a = a - size)
	{
		total = total + *(a + i);
	}
	printf("%d\n", total);

}
