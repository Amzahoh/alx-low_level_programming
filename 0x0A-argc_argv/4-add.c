#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count the number of argment
 * @argv: array of argument
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
	{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
	}
		add += atoi(argv[i]);
	}
		printf("%d\n", add);
		return (0);
}
