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
			_putchar('\\');
			if (i < n - 1)
			{
				_putchar('\n');

				for (j = 0; j <= i; j++)
				{
					_putchar(' ');
				}
			}
		}
	}

	_putchar('\n');

}
