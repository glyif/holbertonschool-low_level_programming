#include <stdio.h>

/*
 * 7-print_tebahpla.c
 *
 * Description: This programs prints
 * the lower case alphabet in reverse
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
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
