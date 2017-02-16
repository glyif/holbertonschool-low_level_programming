#include "holberton.h"

/**
 * _isupper - checks for uppper case number
 * @i: integer
 *
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}

