#include <stdio.h>

/**
 * main - main program
 * @void - no arguments
 *
 * Return: nothing;
 */

int main(void)
{
	int i;
	int result;

	result = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result = result + i;
		}
	}

	printf("%d\n", result);

}
