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
 * _strlen - string length
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * malloc_check
 * @ar: pointer to allocated memory
 *
 * Return: pointer or NULL;
 */

void *malloc_check(void *p)
{
	if (p == NULL)
		return (NULL);
	else
		return (p);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len;
	dog_t *new_dog;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

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

	new_dog->age = age;

	return (new_dog);
}
