#include "dog.h"

/**
 * init_dog - Initializes a structure of type dog
 * @d: Pointer to structure
 * @name: Pointer to the name of the dog
 * @age: Age of dog
 * @owner: Pointer to owner of dog
 *
 * Return: Void
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
