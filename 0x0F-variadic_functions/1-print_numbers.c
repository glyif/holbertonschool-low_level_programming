#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separator charater
 * @n: number of numbers
 * @...: variadic amount of numers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;

	va_list ap;

	va_start(ap, n);
	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(ap, int));

		if (c < n - 1 && separator != NULL)
			printf("%s", separator);

	}

	putchar('\n');

	va_end(ap);

}
