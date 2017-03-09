#include <stdlib.h>

/**
 * _strlen - string length
 * @str: string
 *
 * Return: string length
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);

}


/**
 * string_nconcat - concats string
 * @s1: first string
 * @s2: second string
 * @n: how many to concat
 *
 * Return: pointer to string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar, *empty;
	unsigned int i, j;

	empty = "";

	if (s1 == NULL)
		s1 = empty;

	if (s2 == NULL)
		s2 = empty;
	
	ar = malloc(_strlen(s1) + n + 1);

	for (i = 0; s1[i] != '\0'; i++)
		ar[i] = s1[i];

	for (j = 0; j <= n; j++)
		ar[i + j] = s2[j];

	ar[i + j] = '\0';
	return (ar);

}
