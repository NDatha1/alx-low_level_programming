#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Search for integer.
 * @array: Pointer to array.
 * @size: No. of elements in array.
 * @cmp: Function pointer.
 * Return: Return index if not 0, -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}
