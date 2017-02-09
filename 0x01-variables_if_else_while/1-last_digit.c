#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 1-last_digit.c
 *
 * Description: This program generates a random number
 * then it prints if the last number is
 * greater than 5, less than 6 but not equal to 0, or
 * equal to 0.
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
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	else if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);

	return (0);
}
