#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_numbers - entry function that print numbers
 * @separator: to print between numbers
 * @n: number of arguments to pas  into the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
