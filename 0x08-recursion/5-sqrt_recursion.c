#include "main.h"

int search_sqrt(int, int);
/**
 *  _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: square of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (search_sqrt(n, 2));
}


/**
 * search_sqrt - search for the square  of an integer
 * @n:  integer
 * @i: incrementation
 * Return: the square of n
 */

int search_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (search_sqrt(n, i + 1));
}
