#include "holberton.h"

/**
 * _strcpy - copy string
 * @dest: copy of src
 * @src: the source of the copy
 *
 * Return: the copy of the src
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (temp);
}
