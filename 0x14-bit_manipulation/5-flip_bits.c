#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: contains the bits to be flipped
 * @m: we are flipping to get here
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long tmp = n ^ m, count = 0;

	while (tmp)
	{
		if (tmp & 1)
			count += 1;
		tmp = tmp >> 1;
	}
	return (count);
}
