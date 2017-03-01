#include "holberton.h"

/**
 * _pow_recursion - power of a number from a number
 * @x: number to take power
 * @y: power to
 *
 * Return: total
 */

int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));

}
