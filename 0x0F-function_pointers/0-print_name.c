#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - entry point of the function
 * @name: name to print
 * @f: function to pointer to use
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
