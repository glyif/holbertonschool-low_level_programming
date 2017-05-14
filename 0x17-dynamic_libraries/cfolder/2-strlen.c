#include "holberton.h"

/**
 * _strlen - finds length of a string
 * @s: string
 *
 * Return: length of the string s
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		i++;
	}


	return (i);
}
