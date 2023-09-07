#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of ints.
 * @min: Smallest int.
 * @max: Largest int.
 * Return: Pointter to new array.
 */
int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
	{
	return (NULL);
	}

	/*Allocate  memory for the array.*/
	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
	return (NULL);
	}

	while (min <= max)
	{
	arr[i] = min;
	i++;
	min++;
	}

	return (arr);
}
