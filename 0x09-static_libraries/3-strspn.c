#include<stdio.h>
/**
 * _strspn - copy a memory from a bufferto an other
 *@s: is a pointer so char
 *@accept: a pointer or string of start
 * Return: an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
	{
	int i = 0;
	unsigned int number = 0;

	while (s[i])
	{
		int j = 0;

	while (accept[j])
	{
	if (s[i] == accept[j])
	{
		number++;
		break;
	}
		j++;
		}
	if (accept[j] == '\0')
	{
		break;
	}
		i++;
	}
	return (number);
}
