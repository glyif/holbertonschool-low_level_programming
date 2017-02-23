#include "holberton.h"

/**
 * cap_string - all to upper case
 * @s: string to check
 *
 * Return: string with upper case
 */

char *cap_string(char *s)
{
	int i = 0;
	int prev = i - 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else if (s[prev] == ' ' || s[prev] == '\t' || s[prev] == '\n'
					|| s[prev] == ',' || s[prev] == ';' || s[prev] == '?'
					|| s[prev] == '"' || s[prev] == '(' || s[prev] == ')'
					|| s[prev] == '{' || s[prev] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
