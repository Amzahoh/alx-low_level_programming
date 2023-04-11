#include <stdlib.h>
/**
 * _strdup - create_array
 * @str: The pointer
 * Return: On success a pointer on array otherwise NULL.
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int i = 0;
		int j;
		char *ptr;

		while (*(str + i))
			i++;
		ptr = (char *)malloc(sizeof(char) * i + 1);
		if (ptr == NULL)
			return (NULL);
		for (j = 0; j < i; j++)
		{
			*(ptr + j) = *(str + j);
		}
			ptr[i] = '\0';
			return (ptr);
	}
}
