#include "holberton.h"
/**
 * main - main program
 * @void - no arguments
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	char s[] = "Holberton";

	for (i = 0; i <= 9; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

	return (0);
}
