#include <stdio.h>

/*
 * 2-print_alphabet.c
 *
 * Description: This programs prints
 * all lower case letters execpt for
 * 'e' and 'q'  followed by
 * a new line character.
 */

/**
 * main - the main program is here.
 * @void: does not take any arguments
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		}
		else
		{
			c++;
		}

	}

	putchar('\n');

	return (0);
}
