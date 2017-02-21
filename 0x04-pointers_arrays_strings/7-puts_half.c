#include "holberton.h"

/**
 * puts_half - prints the latter half of a string
 * @str: string
 *
 */

void puts_half(char *str)
{
	int i;

	for (i = 1; str[i] != '\0'; i++)
		;
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
