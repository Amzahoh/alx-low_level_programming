#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - entry function
 * @n: number of argument to enter
 * Return: return sum of n arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum = 0;

	va_start(ap, n);	
	for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
