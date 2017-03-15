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

	if (argc != 4)
	{
		printf("Error\n");
		return (0);
	}

	calc = (get_op_func(argv[2]));
	
	if (calc == NULL)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
