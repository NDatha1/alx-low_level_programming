#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals of a square matrix of integers.
 * @a:Pointer
 * @size: Size of matrix.
 * Return: Empty
 */
void print_diagsums(int *a, int size)
{
	int mainDsum = 0;
	int secondDsum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	mainDsum += a[i * size + i];
	secondDsum += a[i * size + (size - 1 - i)];
	}
	printf("Main Diagonal sum: %d\n", mainDsum);
	printf("Secondary Diagonal Sum: %d\n", secondDsum);
}
