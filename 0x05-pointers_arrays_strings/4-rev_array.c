#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses array
 * @a: array
 * @n: up to index of array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	n = n - 1;	
	for (i = 0; i <= n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
