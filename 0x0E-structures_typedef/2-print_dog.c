#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that initiliase
 * @d: pointer to the adress of the structure
 * Return : If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!d->owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
