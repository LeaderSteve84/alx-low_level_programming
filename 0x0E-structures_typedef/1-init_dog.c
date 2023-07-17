#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * of type struct dog
 * @d: dog to be initialized
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
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
