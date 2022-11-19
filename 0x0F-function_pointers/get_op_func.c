#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - the function that selects the correct
 * function to perform the operation asked by the user.
 * You’re not allowed to declare.
 * @s: operator passed.
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
	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
	}
	return (NULL);
}
