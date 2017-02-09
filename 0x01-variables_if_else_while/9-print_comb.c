#include <stdio.h>

/*
 * 9-print_comb.c
 *
 * Description: This programs prints
 * integres from 0-9 with a ',' and space
 * in-between each integer.
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

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);

}
