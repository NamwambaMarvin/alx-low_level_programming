#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Gets the correct function to perfom an operation
 * @s: String representation of the operator
 * Return: Foward to the operation handler
 */
int (*get_op_func(char *s))(int, int)
{
	int index;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	index = 0;
	while (index < 5)
	{
		if (ops[index].op[0] == s[0])
			return (ops[index].f);
		index++;
	}
	return (NULL);
}
