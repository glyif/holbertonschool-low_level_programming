#include "holberton.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: characters to accept
 *
 * Return: pointer to byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}

		i++;

	}

	return (0);

}
