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
  int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] == haystack[i] && needle[i] != '\0' && haystack[i] != '\0'; i++)
			;	
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
