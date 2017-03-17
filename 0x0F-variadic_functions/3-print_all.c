#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @seperator: seperator
 * @ap: variable list
 *
 * Return: Nothing
 */

void print_char(char *seperator, va_list ap)
{
	printf("%s%c", seperator, va_arg(ap, int));
}

/**
 * print_int - prints integer
 * @seperator: seperator
 * @ap: variable list
 *
 * Return: nothing
 */

void print_int(char *seperator, va_list ap)
{
	printf("%s%d", seperator, va_arg(ap, int));
}

/**
 * print_float - prints float
 * @seperator: seperator
 * @ap: varialbe list
 *
 * Return: nothing
 */

void print_float(char *seperator, va_list ap)
{
	printf("%s%f", seperator, va_arg(ap, double));
}

/**
 * print_string - prints string
 * @seperator: seperator
 * @ap: variable list
 *
 * Return: nothing
 */

void print_string(char *seperator, va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		printf("(nil)");

	printf("%s%s", seperator, s);
}

/**
 * print_all - prints anything
 * @format: format of the number preceeding arguments to print
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *seperator;

	va_list ap;
	print p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	i = 0;
	seperator = "";

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (p[j].c != NULL)
		{
			if (format[i] == p[j].c[0])
			{
				p[j].f(seperator, ap);
				seperator = ", ";
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	va_end(ap);
}
