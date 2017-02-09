#include <stdio.h>

/*
 * 8-print_base16.c
 *
 * Description: This programs prints
 * all numbers of hexadecimal.
 *
 */

/**
 * main - the main program is here.
 * @void: does not take any arguments
 *
 * Return: 0
 */

int main(void)
{
	char n = 48;
	char c = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (c <= 102)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);

}
