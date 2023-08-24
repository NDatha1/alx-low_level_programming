#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverse orde of ints in a array.
 * @a: Array of ints.
 * @n: No. of elements to reverse.
 * Return: Empty.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
	/*Swap elements at start and end indices.*/
	int temp = a[start];

	a[start] = a[end];
	a[end] = temp;

	/*Move indices towards each other.*/
	start++;
	end--;
	}
}
