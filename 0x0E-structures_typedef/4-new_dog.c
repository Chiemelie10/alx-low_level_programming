#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Name of the owner of the new dog
 * Return: Pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name;
	char *new_owner;

	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->age = age;

	if (name)
	{
		new_name = malloc(sizeof(char) * strlen(name) + 1);
		if (new_name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->name = strcpy(new_name, name);
	}
	else
		d->name = NULL;

	if (owner)
	{
		new_owner = malloc(sizeof(char) * strlen(owner) + 1);
		if (new_owner == NULL)
		{
			free(new_name);
			free(d);
			return (NULL);
		}
		d->owner = strcpy(new_owner, owner);
	}
	else
		d->owner = NULL;

	return (d);
}
