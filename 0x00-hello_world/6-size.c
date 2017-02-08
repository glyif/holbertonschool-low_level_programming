#include <stdio.h>

/*
* 6-size.c
* Description: This program prints out the size of:
* char, int, long int, long long int and float
*/

/**
* main - The main function of the program.
* @void: Not taking any arguments.
*
* Return: 0
*/

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);

}
