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
	free(d->name);
	free(d->owner);
	free(d);
}
