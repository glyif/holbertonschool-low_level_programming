#include "holberton.h"

/**
 * rot13 - rot13 encoding
 * @s: string
 *
 * Return: string with rot13;
 */

char *rot13(char *s)
{
	int i;
	int j;
	char from[] = "abcdefghijklmABCDEFGHIJKLM";
	char to[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
			}
			else if (s[i] == to[j])
			{
				s[i] = from[j];
			}
		}
	}

	return (s);
}
