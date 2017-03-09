#include <stdlib.h>

/**
 * _strlen - length of string
 * @str: string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	
	return (i);
}

/**
 * total_len - length of all args
 * @arg
 *
 * Return: length
 */

int total_len(char **arg)
{
	int i;
	int l;

	for (i = 0; arg[i] != NULL; i++)
		l = l + _strlen(arg[i]);
	
	return l;
}

/**
 * copy_arg - copies 1 arg
 * @from: copying from
 * @to: coptying to
 *
 * Return: nothing
 */

void copy_arg(char *from, char *to)
{
	int i;

	for (i = 0; from[i] != '\0'; i++)
		to[i] = from[i];
}

/**
 * copy_args - concats into 1 string
 * @from: copying to
 * @to: copying from
 *
 * Return: nothing
 */

void copy_args(char **from, char *to)
{
	int i;
	int j;

	for (i = 0, j = 0; from[i] != '\0'; i++, j++)
	{
		copy_arg(from[i], to + j);
		j = j + _strlen(from[i]);
		to[j] = '\n';
	}

	to[j] = '\0';
}

/**
 * argstostr - concats all arguments
 * @ac: count of arguments
 * @av: arguments
 *
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *ar ;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	ar = malloc(ac + 1 + total_len(av));

	copy_args(av, ar);

	return (ar);

}

