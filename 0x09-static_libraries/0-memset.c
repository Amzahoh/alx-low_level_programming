#include <stdio.h>

/**
 * _memset - set a constant to an area of memory
 * @s: is a pointer
 * @b: is a chaaracter to set
 * @n: the number of byte to fill
 * Return: the pointer s to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
