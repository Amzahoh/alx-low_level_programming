#include<stdio.h>
/**
 * _strstr - shearch for the occurance
 * of a given string on a string
 *@haystack: is a pointer
 *@needle: streng to search
 * Return: thepointer s or null if unfound
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (0);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		}
	return (NULL);
}
