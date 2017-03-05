#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define QUARTER 25
#define DIME 10
#define NICKLE 5
#define PENNY 1


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
	while (change >= QUARTER)
	{
		coins++;
		change -= QUARTER;
	}
	while (change > 0)
	{
		if (change >= DIME)
		{
			coins++;
			change -= DIME;
		}
		else if (change >= NICKLE)
		{
			coins++;
			change -= NICKLE;
		}
		else if (change >= 2)
		{
			coins++;
			change -= 2;
		}
		else if (change >= PENNY)
		{
			coins++;
			change -= PENNY;
		}
	}
	printf("%d\n", coins);
	return (0);

}
    
