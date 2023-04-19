#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - entry point of the function
 * @array: yhe array
 * @size: the size of the array
 * @action: function to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i <= size; i++)
	action(array[i]);
	}
