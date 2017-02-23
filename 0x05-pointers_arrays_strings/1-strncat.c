#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - cats two strings with max byte
 * @dest: destination string
 * @src: source string
 * @n: max bytes
 *
 * Return: concatenated string with max value constraint
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	return (dest);
}
