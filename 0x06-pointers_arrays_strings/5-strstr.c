#include "holberton.h"
#include <stdio.h>


/**
 * _strstr - finding substring in string
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: pointer to beginning of located string or null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *haystackcp = haystack;
		char *needlecp = needle;
		int i;

		for (i = 0; needlecp[i] == haystackcp[i]
				&& needlecp[i] != '\0' && haystackcp[i] != '\0'; i++)
			;

		if (needlecp[i] == '\0')
			return (haystackcp);

		haystack = haystackcp + 1;
	}
	return (NULL);
}
