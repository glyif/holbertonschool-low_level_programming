#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: sum or "error" and 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 1, sum = 0; i < argc; i++)
	{
		if (*argv[i] == 0 || atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
