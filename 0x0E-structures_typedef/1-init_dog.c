#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of struct dog.
 * @d: Pointer
 * @name: Dog identifier.
 * @age: Dog lifespan.
 * @owner: Dog master.
 * Return: Empty
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
