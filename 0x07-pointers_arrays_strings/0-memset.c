#include <stdio.h>

/**
 * _memset - set a constant to an area of memory
 * @s: is a pointer
 * @b: is a chaaracter to set
 * @n: the number of byte to fill
 * return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

