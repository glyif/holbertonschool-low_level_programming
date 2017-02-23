#include "holberton.h"

/**
 * string_toupper - all to upper case
 * @s: string to check
 *
 * Return: string with upper case
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (int) s[i] - 32;
	}

	return (s);
}
