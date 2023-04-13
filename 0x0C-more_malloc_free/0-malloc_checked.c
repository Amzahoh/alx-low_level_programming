#include <stdlib.h>
/**
 * * malloc_checked - a function to allocate memory
 * @b: unsigned interger
 * Return: a pointer to the allocated memory or exit.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{	exit(98);
	}
	return (ptr);
}
