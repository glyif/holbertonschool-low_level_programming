#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies string
 * @str: string
 *
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
	int i;
	int c;
	char *ar;

	if (str == '\0')
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
		;

	c++;

	ar = malloc(c * sizeof(char));

	i = 0;

	while (str[i] != '\0')
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}
