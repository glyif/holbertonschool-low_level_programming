#include "holberton.h"

/**
 * _memset - fill memory with a constant byte
 * @s: memory area to be filled
 * @b: what to the area with
 * @n: how many number of times
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);

}
