#include "main.h"
#include <stdio.h>
/**
 * factorial - Return factorial of no.
 * @n: No. to be checked.
 * Return: -1 if n is lower than 0 or factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n  - 1));
}
