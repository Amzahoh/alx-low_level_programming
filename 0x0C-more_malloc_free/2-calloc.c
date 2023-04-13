#include <stdlib.h>
#include <string.h>
/**
 * * _calloc - a function to allocate memory to an array
 * @size: unsigned interger
 * @nmemb: an unsigned integer
 * Return: a pointer to the allocated memory or exit.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{       return(NULL);
	}
	arr = malloc(size * nmemb);

	if (arr == NULL)
	{	return (NULL);
	}
	memset(arr, 0, size * nmemb);
	return (arr);
}
