#include "holberton.h"

/**
 * puts_half - prints the latter half of a string
 * @str: string
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int l = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i - 1) / 2;

	while (l <= i)
	{
		_putchar(*(str + i + l));
		l++;
	}

	_putchar('\n');
}
