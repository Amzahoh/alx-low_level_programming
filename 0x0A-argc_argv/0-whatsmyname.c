#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: count the number of argment
 * @argv: array of argument
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; argv[0][i] != '\0'; i++)
		{
			_putchar(argv[0][i]);
		}
		_putchar('\n');
	}
	return (0);
}
