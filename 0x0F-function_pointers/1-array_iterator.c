#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Execute funtion given as param on each array element.
 * @array: Pointer to array.
 * @size; No. of elements to print.
 * @action: Function pointer.
 * Return: Empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
