#include<stdio.h>
/**
 * _strchr - shearch for the occurance
 * of a given character on a string
 *@s: is a pointer
 *@c: character to search
 * Return: thepointer s or null if unfound
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
	if (s[i] == c)
	{
	return (s + i);
	}
	i++;
	}
	return (NULL);
}

