#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - writes a string
 * @s: is a pointer to a char
 * Return: On success 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
