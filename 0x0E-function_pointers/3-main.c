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
		exit(98);
	}

	calc = (get_op_func(argv[2]));

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", calc(a, b));

	return (0);
}
