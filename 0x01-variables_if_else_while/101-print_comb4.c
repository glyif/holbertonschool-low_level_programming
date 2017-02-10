/*
 * 12-print_comb4.c
 *
 * Description:
 * 3 digits no repeat
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
	int a;
	int b;
	int c;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = a + 1; b <= '8'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
			    putchar(c);

				if (a != '7' || b != '8' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

