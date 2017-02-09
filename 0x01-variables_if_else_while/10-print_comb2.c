/*
 * 10-print_comb2.c
 *
 * Description:
 * This program prints all integers between 00 and 99.
 * All integers printed are double digits. If the integer
 * is normally a single digit, IE: 1, a zero is added to the
 * front.
 */

#include <stdio.h>
#define ZERO 48
#define NINE 57

/**
 * main - this is the main function that's running
 * @void - no arguments
 *
 * Return: 0
 *
 */
int main(void)
{
	int n = ZERO;
	int l = ZERO;
	int counter = 0;

	while (n <= NINE)
	{
		while (counter <= 9)
		{
			putchar(n);
			putchar(l);
			if (n != 57 || l != 57)
			{
				putchar(',');
				putchar(' ');
			}

			l++;
			counter++;

		}

		counter = 0;
		n++;
		l = ZERO;

	}

	putchar('\n');

	return (0);

}

