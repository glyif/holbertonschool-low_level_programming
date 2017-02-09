#include <stdio.h>

/*
 * 4-print_alphabt.c
 *
 * Description: This programs prints
 * the lower case alphabet followed by
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
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
