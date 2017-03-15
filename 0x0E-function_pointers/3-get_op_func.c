#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - pointer function to decide what function to use
 * @s: operand
 *
 * Return: int pointer
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i]).op)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
