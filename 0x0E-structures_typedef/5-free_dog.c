#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * free_dog - frees
 * @d: pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
