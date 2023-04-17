#include "dog.h"
#include<stddef.h>
/**
 * init_dog - function that initiliase
 * @d: pointer to the adress of the structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return : always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
