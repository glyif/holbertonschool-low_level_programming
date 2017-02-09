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
	char hex;

	while (hex < 16)
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');

	return (0);

}
