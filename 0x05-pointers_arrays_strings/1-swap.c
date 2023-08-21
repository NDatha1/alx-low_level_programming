#include "main.h"
/**
 * swap_int - Swap values of 2 integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Empty.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
