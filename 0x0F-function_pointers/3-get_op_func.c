#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform
 * @s: operator passed as argument to the program
 * Return: result of function of num1 and num2.
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
	int index;

	index = 0;
	while (ops[index].f != NULL)
	{
		if (*s == *(ops[index].op) && s[1] == '\0')
			return (ops[index].f);
		index++;
	}

	printf("Error\n");
	exit(99);
}
