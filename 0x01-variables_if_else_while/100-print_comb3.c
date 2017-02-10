/*
 * 11-print_comb3.c
 *
 * Description:
 * This program prints all integers between 01 and 99
 * except for digits that are repeated.
 * 01 and 10 are considered repeats
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
	int second_counter = 8;
	int third_counter = 1;

	while (n <= NINE)
	{
		while (counter <= second_counter)
		{
			putchar(n);
			putchar(l + third_counter);

			if (n != 56 && l != 57)
			{
				putchar(',');
				putchar(' ');
			}

			l++;
			counter++;
		}

		n++;
		l = ZERO;
		counter = 0;
		second_counter--;
		third_counter++;
	}

	putchar('\n');

	return (0);

}

