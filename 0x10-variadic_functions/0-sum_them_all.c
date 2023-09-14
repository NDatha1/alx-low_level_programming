#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Add all params.
 * @n: No.
 * Return: 0 if n == 0 otherwise sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int value = va_arg(args, int);

	sum += value;
	}

	va_end(args);

	return (sum);
}
