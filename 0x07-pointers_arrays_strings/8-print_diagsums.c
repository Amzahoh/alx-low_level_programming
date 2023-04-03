#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - calculate the sum of the two diagonals
 *                  of a square matrix and display it
 * @a: an array
 * @size: size of the  matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size * size;
	int diag1 = 0;
	int diag2 = 0;

	while (x < y)
	{
		if (x % (size + 1) == 0)
			diag1 += *(a + x);
		if (x > 0 && x < (y - 1) && x % (size - 1) == 0)
			diag2 += *(a + x);
		x++;
	}
	printf("%x, %x\n", diag1, diag2);
}
