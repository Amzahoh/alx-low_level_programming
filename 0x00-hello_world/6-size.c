#include <stdio.h>
/**
 *
 * hi
 *
 * main
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu bytes(s)\n" sizeof(c));
	printf("Size of an int: %lu bytes(s)\n" sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n" sizeof(li));
	printf("Size of a long long: %lu bytes(s)\n" sizeof(lli));
	printf("Size of a float: %lu bytes(s)\n" sizeof(f));
	return (0);
}
