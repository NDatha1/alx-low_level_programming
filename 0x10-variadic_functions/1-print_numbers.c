#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Output numbers.
 * @separator: String to be printed btn numbers.
 * @n: No of integers to pass.
 * Return: Empty.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int value = va_arg(args, int);

	printf("%d", value);

	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
