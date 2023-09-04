#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars.
 * @size: Size of an array.
 * @c: The chra to fill in the array.
 * Return: Pointer to array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	s[i] = c;
	}

	return (s);
}
