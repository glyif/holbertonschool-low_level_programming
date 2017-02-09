#include <stdio.h>

/*
 * 5-print_numbers.c
 *
 * Description: This programs prints
 * all numbers of base 10 starting with 0.
 * Only using putchar.
 */

/**
 * main - the main program is here.
 * @void: does not take any arguments
 *
 * Return: 0
 */

int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);

}
