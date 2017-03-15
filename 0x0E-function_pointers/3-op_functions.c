#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: first int
 * @b: second int
 *
 * Return: subtracts b from a
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: first int
 * @b: second int
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: first int
 * @b: second int
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulos
 * @a: first int
 * @b: second int
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}
