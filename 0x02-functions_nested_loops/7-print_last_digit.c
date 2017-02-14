#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @a: integer
 * Return: last digit
 */

int print_last_digit(int a)
{
	int result;


	if (a < 0)
	{
		result = (a * -1) % 10;
	}
	else
	{
		result = a % 10;
	}

	_putchar(result + '0');

	return (result);
}
