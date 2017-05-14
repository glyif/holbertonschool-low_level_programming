#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to look for
 *
 * Return: number of occourances
 */

unsigned int _strspn(char *s, char *accept)
{

	int i = 0;
	int j = 0;
	int k = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}

			j++;
		}

		if (accept[j] == '\0')
			return (k);

		i++;

	}

	return (k);

}
