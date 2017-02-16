#include "holberton.h"

/**
 * print_diagonal - prints diagonal
 * @n: lines
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
