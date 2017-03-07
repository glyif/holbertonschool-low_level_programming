#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds length of a string
 * @str: string
 *
 * Return: length of a string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * str_concat - concats two strings into one
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, c1, c2, total;
	char *ar, *empty;

	empty = "";

	if (s1 == NULL)
		s1 = empty;

	if (s2 == NULL)
		s2 = empty;

	c1 = _strlen(s1);
	c2 = _strlen(s2);

	c2++;

	total = c1 + c2;

	ar = malloc(0);

	for (i = 0; i < c1; i++)
		ar[i] = s1[i];

	while (i < total)
	{
		ar[i] = s2[i - c1];
		i++;
	}

	return (ar);
}
