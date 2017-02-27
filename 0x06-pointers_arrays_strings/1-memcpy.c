#include "holberton.h"

/**
 * _memcpy - n types from src to dest
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of times
 *
 * Return: pointer set to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
