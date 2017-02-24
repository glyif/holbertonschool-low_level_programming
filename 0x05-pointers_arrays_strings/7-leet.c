#include "holberton.h"

char *leet(char *s)
{
	int i;
	int j;
	char from[] = "aeotlAEOTL";
	char to[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if(s[i] == from[j])
			{
				s[i] = to[j];
			}
		}
	}

	return(s);
}
