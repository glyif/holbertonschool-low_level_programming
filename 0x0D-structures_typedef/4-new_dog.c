#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, name_len, owner_len;
	dog_t *new_dog;
	
	if (name == NULL)
		return (NULL);

	if (age != 0)
	{
		for (name_len = 0; name[name_len] != '\0'; name_len++)
			;
	}
	else
	{
		return (NULL);
	}

	if (owner != NULL)
	{
		for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
			;
	}
	else
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_len);

	if (new_dog->name == NULL)
		return (NULL);

	new_dog->owner = malloc(owner_len);

	if (new_dog->owner == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];

	for (i = 0; owner[i] != '\0'; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
