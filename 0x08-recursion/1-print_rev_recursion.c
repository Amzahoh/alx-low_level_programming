#include "main.h"
/**
 * _print_rev_recursion - writes a string in reverse
 * @s: is a pointer to a char
 * Return: On success 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{	_putchar('\n');
		return;
	}
		else
	       {	_print_rev_recursion(s + 1);
			_putchar(*s);
			}
}
