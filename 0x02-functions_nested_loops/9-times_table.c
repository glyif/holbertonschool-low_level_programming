#include "holberton.h"

/**
 * times_table - times table
 * @void: no arguments
 *
 * Return: nothing
 *
 */

void times_table(void)
{
	int i;
	int k;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			j = i * k;

			if (k == 0)
			{
				_putchar(j + '0');
			}
			else if (j <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}

		}
		_putchar('\n');
	}

}
