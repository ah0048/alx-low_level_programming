#include <stddef.h>
#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: pointer
 * @name: pointer
 * @age: age
 * @owner: owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
