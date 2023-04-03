#include "main.h"

/**
 * print_chessboard -  chessboard
 * @a: input array
 * Return: mothing
 */
void print_chessboard(char (*a)[8])
{
	for (i = 0; i < 8; i++)
	{
		int j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
	}
}
