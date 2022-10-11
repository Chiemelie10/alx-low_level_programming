#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: Dog
 * @name: Name of the dog
 * @age: The dog's age
 * @owner: Name of the dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
