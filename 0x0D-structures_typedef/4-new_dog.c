#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - string copy
 * @t: to
 * @f: from
 *
 * Return: pointer to new string
 */

char *_strcpy(char *to, char *from)
{
	int i;
	
	for (i = 0; from[i] != '\0'; i++)
		to[i] = from[i];

	return(to);
}

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
	unsigned int name_len, owner_len;
	dog_t *new_dog;

	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;

	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_len);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(owner_len);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	
	_strcpy(new_dog->name, name);
	
	_strcpy(new_dog->owner, owner);
	/*
	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];

	for (i = 0; owner[i] != '\0'; i++)
		new_dog->owner[i] = owner[i];
	*/

	new_dog->age = age;

	return (new_dog);
}
