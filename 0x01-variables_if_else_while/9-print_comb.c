#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int b = 0;

	while (i <= 99)
	{
		b = i + 1;
		while (b <= 99)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
			if (i != 98 || b != 99)
		{
			putchar(',');
			putchar(' ');
		}
				b++;
	}
				i++;
	}
		putchar('\n');
		return (0);
}
