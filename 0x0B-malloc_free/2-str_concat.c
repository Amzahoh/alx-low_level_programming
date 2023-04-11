#include<stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure,esle pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *n_s;
	int i;
	int concat_i = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	n_s  = malloc(sizeof(char) * len);
	if (n_s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		n_s[concat_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		n_s[concat_i++] = s2[i];
	return (n_s);
}
