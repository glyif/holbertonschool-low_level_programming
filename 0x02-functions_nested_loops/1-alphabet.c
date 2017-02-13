#include "holberton.h"

/**
 * print_alphabet - prints alphabet a-z
 * @void - no arguments
 *
 * Return 0;
 */

void print_alphabet(void)
{
	int a = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');

}
