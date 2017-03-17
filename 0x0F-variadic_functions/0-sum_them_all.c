#include <stdarg.h>

/**
 * sum_them_all - variadic sum of all
 * @n: number of numbers to add
 * @...: n number of variables
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0, sum = 0; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}
