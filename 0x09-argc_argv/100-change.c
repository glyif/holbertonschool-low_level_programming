#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - returns number of coins
 * @argc: argument count
 * @argv: arguments
 *
 * Return: number of coins or 0
 */

int main(int argc, char *argv[])
{
	int coins, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	coins = 0;
	while (change >= 25)
	{
		coins++;
		change -= 25;
	}
	while (change > 0)
	{
		if (change >= 10)
			coins++, change -= 10;
		else if (change >= 5)
			coins++, change -= 5;
		else if (change >= 2)
			coins++, change -= 2;
		else if (change >= 1)
			coins++, change -= 1;
	}
	printf("%d\n", coins);
	return (0);

}
