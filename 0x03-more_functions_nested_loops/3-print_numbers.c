#include "holberton.h"

/**
 * print_numbers - prints 0-9
 * @void: no arguments
 *
 * Return: 0
 */

int print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');

	return (0);
}
