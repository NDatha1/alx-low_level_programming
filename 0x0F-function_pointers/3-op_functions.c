#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - addition
 * @a: First int.
 * @b: Second int.
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction.
 * @a: First int.
 * @b: Second int.
 * Return: Subraction result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply
 * @a:...
 * @b:...
 * Return: Multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide
 * @a:.
 * @b:.
 * Return:...
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - ...
 * @a:..
 * @b:...
 * Return:..
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}

	return (a % b);
}
