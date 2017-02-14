#include "holberton.h"

void times_table(void)
{
	int i = 0;
	int five = 0;
	for (i = 0; i <= 9; i++)
	{
		five = i * 5;
		_putchar(five - '0');
	}
}
