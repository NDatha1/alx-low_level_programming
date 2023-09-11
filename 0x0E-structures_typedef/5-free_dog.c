#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -Let dogs free.
 * @d: Pointer.
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
