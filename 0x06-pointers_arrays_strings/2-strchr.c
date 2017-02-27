#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locate character in string
 * @s: input string
 * @c: character to look for
 *
 * Return: pointer to 1st occurance of c in s
 * or null if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	
	if (s[i] == c)
		return (s + i);

	return ('\0');

}
