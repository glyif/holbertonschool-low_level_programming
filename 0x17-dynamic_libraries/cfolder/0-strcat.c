#include "holberton.h"

/**
 * _strcat - cats two strings
 * @dest: destination
 * @src: source
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	return (dest);
}
