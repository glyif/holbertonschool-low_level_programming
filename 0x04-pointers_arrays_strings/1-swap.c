#include "holberton.h"

/**
 * swap_int - swaps values of 2 integers
 * @a: first integer
 * @b: second integer
 *
 */

void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
