#include "main.h"
/**
 * _strlen_recursion - writes a string in reverse
 * @s: is a pointer to a char
 * Return: On success 0.
 */
int _strlen_recursion(char *s)
{	int ln;
	if (*s)
	{	ln = _strlen_recursion(s + 1);
	return (ln = ln + 1);
	}
	return (0);
}
