#include <stdlib.h>
/**
 * create_array - create_array
 * @c: The character
 * @size: size of the array
 * Return: On success a pointer on array otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == NULL)
		{
		return (NULL);
		}
	for (i = 0 ; i < size ; i++)
	{
		p[i] = c;
	}
	return (p);
}
