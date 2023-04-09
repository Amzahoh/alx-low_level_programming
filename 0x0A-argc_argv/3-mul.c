#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count the number of argment
 * @argv: array of argument
 * Return: On success 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int a, b, mult;

	if (argc > 2)
	{	a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
