#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: max characters copied
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	if (n > i)
		dest[i] = '\0';


	return (dest);
}
