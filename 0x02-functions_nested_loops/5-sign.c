#include "holberton.h"

/**
 * print_sign - prints +, -, 0
 * depending if the number inputed
 * is positive, negative, or zero
 *
 * @n: number
 *
 * Return: 1 for greater than 0, 0 for 0,
 * -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
