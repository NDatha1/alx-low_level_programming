#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc.
 * @b: No. of bytes to allocate.
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
