#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog's memory.
 * @d: Pointer to the dog to free.
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
