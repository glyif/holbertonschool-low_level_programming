#include "holberton.h"

/**
 * _abs - finds absolute value of int
 * @r: inputs integer
 *
 * Return: 0
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
	return (0);
}
