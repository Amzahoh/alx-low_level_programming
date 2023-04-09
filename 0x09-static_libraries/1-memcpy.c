#include<stdio.h>
/**
 * _memcpy - copy a memory from a bufferto an other
 *@dest: is a pointer
 *@src: a pointer
 *@n:number of byte to copy
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0, j = 0; n > 0 ; i++, j++)
	{
		dest[i] = src[j];
		n--;
	}
	return (dest);
}
