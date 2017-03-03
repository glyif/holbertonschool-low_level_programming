#include <stdio.h>

/**
 * main - prints argument on new line
 * @argc: counts arguments
 * @argv: argument
 *
 * Return: argument in new lines
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}

