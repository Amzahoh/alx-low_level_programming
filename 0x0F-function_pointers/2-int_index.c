#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - entry point of the function
 * @array: yhe array
 * @size: the size of the array
 * @cmp: function to use
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) )
		{
		return (i);
		}
	}
		return (-1);

}
