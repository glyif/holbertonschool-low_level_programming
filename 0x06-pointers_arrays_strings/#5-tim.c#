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
	while (*haystack != '\0') /* does haystack start at null? */
	{
		for (i = 0; needle[i] == haystack[i] && needle[i] != '\0' && haystack[i] != '\0'; i++)
		  ; /* start at beginning of needle always, and new start of haystack */	
		if (needle[i] == '\0') /* end of needle? */
		  return (haystack); /*return haystack from the new start position*/
		haystack++; /* move haystack by one so we start 1 further down next loop */
	}
	return (NULL); /* never got to the end of the needle, so we return NULL*/
}
