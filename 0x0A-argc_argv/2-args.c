#include <stdio.h>
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
		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
	}
	return (0);
}
