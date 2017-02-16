#include "holberton.h"

/**
 * more_numbers - 10x 0-14
 * @void: no arguemnts
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
