#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: count the number of argment
 * @argv: array of argument
 * Return: On success 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc < 1 )
		return (0);
	else
	{_putchar((argc-1) + '0');
	}
	_putchar('\n');
	return (0);
}
