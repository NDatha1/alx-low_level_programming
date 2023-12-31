#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Calculate natural square root.
 * @n: No. to be checked.
 * @i: Iterate number.
 * Return: Always 0.
 */
int _sqrt(int n, int i);
/* _sqrt_recursion -  Calculate natural square root too.*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);
	if (sqrt == n)
	return (i);
	return (_sqrt(n, i + 1));
}
