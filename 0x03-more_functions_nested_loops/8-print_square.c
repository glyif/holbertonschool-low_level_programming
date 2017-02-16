#include "holberton.h"

/**
 * print_square - prints square with #
 * @size: size of square
 *
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
