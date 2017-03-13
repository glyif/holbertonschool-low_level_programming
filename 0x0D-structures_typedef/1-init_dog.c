#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes dog
 * @d: structure dog
 * @name: name
 * @age: age as float
 * @owner: owner name
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
