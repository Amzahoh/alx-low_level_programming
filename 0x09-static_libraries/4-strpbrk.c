#include<stdio.h>
/**
 * _strpbrk - copy a memory from a bufferto an other
 *@s: is a pointer so char
 *@accept: a pointer or string of start
 * Return: an *s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		int j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
