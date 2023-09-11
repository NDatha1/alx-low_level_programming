#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Create a new dog.
 * @name: Identifier.
 * @age: Lifespan.
 * @owner: Master.
 * Return: New dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
	return (NULL);
	}

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
	free(newDog->name);
	free(newDog->owner);
	free(newDog);

	return (NULL);
	}
	newDog->age = age;

	return (newDog);
}
