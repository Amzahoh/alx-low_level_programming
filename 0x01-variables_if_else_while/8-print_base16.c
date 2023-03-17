#include <stdio.h>
/**
 * main - Entry point
 * test
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
	putchar(i < 10 ? i + '0' : i + 'a' - 10);
	i++;
	}
	putchar('\n');
	return (0);
}
