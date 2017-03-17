#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print all arguments
 * @separator: separator
 * @n: number of string
 * @...: variadic number of strings
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	char *temp;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(ap, char *);

		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	putchar('\n');

	va_end(ap);
}
