#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*calc)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		return (0);
	}

	calc = (get_op_func(argv[2]));
	
	if (calc == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", calc(a, b));

	return (0);
}
