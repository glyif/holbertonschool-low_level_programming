#include "holberton.h"

/**
 * _print_rev_recursion - prints string in rev
 * @s: string
 *
 * Returns: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
