#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Return: product or Error
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
