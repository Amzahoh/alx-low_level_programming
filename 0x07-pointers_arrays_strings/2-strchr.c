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
	int emp;

	for (emp = 0; s[emp] != '\0'; emp++)
	{
		if (s[emp] == c)
		{
			return (s + emp);
		}
	}
	if (s[emp] == c)
	{
		return (s + emp);
	}
	return (0);
}
