#include "main.h"
/**
 * _pow_recursion - calculatethe the power of a number
 * @x: is an integer
 * @y: integer
 * Return: -1 y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
	{
		if (y < 0)
		{
		return (-1);
		}
		if (y == 0)
		{
		return (1);
		}
		if (y > 0)
		{
		return (0);
		}
	}
	else if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
