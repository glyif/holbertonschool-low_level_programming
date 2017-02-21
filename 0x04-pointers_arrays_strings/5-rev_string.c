#include "holberton.h"

/**
 * rev_string - reverses string then prints
 * @s: string
 */

void rev_string(char *s)
{
	char temp;
	int a;
	int b;

	a = 0;
	while (s[a]!= '\0')
	{
		a++;
	}

	a = a - 1;

	for (b = 0; b <= a / 2; b++)
	{
		temp = s[b];
		s[b] = s[a - b];
		s[a - b] = temp;
	}

}

