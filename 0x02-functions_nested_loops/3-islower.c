#include "holberton.h"

/**
 * _islower - checks if character is lowercase
 * @c - the character
 *
 * Return: 1 if c is lower case, 0 otherwise
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
