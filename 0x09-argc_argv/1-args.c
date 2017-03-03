#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv:  unused
 *
 * Return: number of arguments
 */

int main(int argc, char __attribute__((unused))*argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}
