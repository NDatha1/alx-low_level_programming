#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array using malloc.
 * @nmemb: No. of array elements.
 * @size: No. of bytes of elements.
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	
	l = nmemb * size;/*Calculate memory size to allocate*/
	p = malloc(l); /*Allocate memory with malloc*/

	if (p == NULL)
	{
	return (NULL);
	}
	/*Initialize allocated memory to 0 using memset*/
	while (i < l)
	{
	p[i] = 0;
	i++;
	}

	return (p);
}
