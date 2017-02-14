#include "holberton.h"

void print_to_98(int n)
{
	int i;
	int j;
	if (n < 98)
	{
	for (i = 0; i <= n; i++)
	{
		if(i >= 10)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
		{
		_putchar(i + '0');
		}
	}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (j = 0; j >= 98; j--)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
		}
	}



}
