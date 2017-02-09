#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 0-positive_or_negative.c
 *
 * Description: This program prints
 * a randomly generated number
 * and prints a string signifying if its
 * negative, positive, or zero
 *
 */

/**
 * main - this is the main function that runs everything
 * @void: no arguments passed in
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
