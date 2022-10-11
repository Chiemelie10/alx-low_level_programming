#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure data type of dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A new type dog_t as a new name for the type struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
