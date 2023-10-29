#include "3-calc.h"
/**
* get_op_func - Selects the correct function
* @s: operator passed as argument.
* Return: Pointer to the corresponding function
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
	int index = 0;

	while ((ops[index].op) && *(ops[index].op) != *s)
	{
		index++;
	}

	return (ops[index].f);
}
