#include "main.h"
/**
 * factorial - calculatethe factorial of a number
 * @n: is an integer
 * Return: On success -1 if false.
 */
int factorial(int n)
{
	if (n < 0)
	{		
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else 
	{	return(1);
	}
}
