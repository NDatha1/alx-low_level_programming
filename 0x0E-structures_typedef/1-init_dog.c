#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initialize a variable of struct dog.
 * @struct dog: Dog structure Pointer.
 * @d: Pointer
 * @name: Dog identifier.
 * @age: Dog lifespan.
 * @owner: Dog master.
 * Return: Empty
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
