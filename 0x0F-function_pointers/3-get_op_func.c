#include "3-calc.h"

/**
* get_op_func - Selects the appropriate function for the given operator
 * @s: char operator
 *
 * Return: Pointer to the corresponding function for the operator,
 * or NULL if the operator is not recognized
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
