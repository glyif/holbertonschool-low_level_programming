#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concats all arguments
 * @ac: count of arguments
 * @av: arguments
 *
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *ar;
	int i, j, k, l;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, l = 0, k = 0; k < ac; i++, l++)
	{
		if (av[k][i]  == '\0')
			k++;
	}
	
	l++;

	ar = malloc(l * sizeof(char));
	
	if (ar == NULL)
		return (NULL);

	for (i = 0, j = 0, k = 0; k < ac; i++, j++)
	{
		ar[j] = av[k][i];
		if (av[k][i] == '\0')
		{
			ar[j] = '\n';
			k++;
			i = -1;
		}
	}

	return (ar);
}
