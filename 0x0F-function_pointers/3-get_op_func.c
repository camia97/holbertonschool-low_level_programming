#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct function
 * @s: pointer to char
 * Return: operator
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
	int a = 0;

	while (a < 5)
	{
		if (ops[a].op[0] == s[0] && !s[1])
			return (ops[a].f);
		a++;
	}
	printf("Error\n");
	exit(99);
}
