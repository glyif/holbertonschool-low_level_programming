#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 * with new line after everytime
 * @void - no arguments
 *
 * Return 0;
 */

void print_alphabet_x10(void)
{
	int a = 0;
	int b = 0;

	for (b = 0; b <= 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}

}
