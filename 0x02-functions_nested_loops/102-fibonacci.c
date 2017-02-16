#include <stdio.h>

/**
 * main - print fibonacci numbers
 * @void - no arguments
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	unsigned long a, b, c;

	a = 1, b = 2;

	while (i < 50)
	{
		printf("%lu", a);
		if (i < 49)
		{
			printf(", ");
		}

		c = b;
		b = a + b;
		a = c;
		i++;
	}

	putchar('\n');
	return (0);
}
