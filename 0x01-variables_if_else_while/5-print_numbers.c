#include <stdio.h>

/*
 * 5-print_numbers.c
 *
 * Description: This programs prints
 * all numbers of base 10 starting with 0.
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
	int base_10;

	while (base_10 < 10)
	{
		printf("%d", base_10);
		base_10++;
	}

	putchar('\n');

	return (0);

}
