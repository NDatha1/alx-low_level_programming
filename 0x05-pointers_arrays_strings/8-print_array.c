#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of array.
 * @a: pointer to array
 * @n: no. of integers.
 * Return: Empty.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
