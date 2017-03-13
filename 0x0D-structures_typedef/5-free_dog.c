#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - freeing new dog
 * @d: pointer to new dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
