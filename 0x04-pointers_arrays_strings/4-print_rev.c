#include "holberton.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 *
 */

void print_rev(char *s)
{
	int l;

	while (*(s + l) != '\0')
	{
		l++;
	}


	for (; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
