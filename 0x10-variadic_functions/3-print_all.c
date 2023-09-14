#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Print anything.
 * @format: List of types of arguments passed.
 * Return: Empty.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);
/**
 * c - character.
 * i - integer.
 * f - floating-point argument.
 * s - string.
 * @format: List of types of arguments.
 */
	if (format)
	{
	while (format[i])
	{
	switch (format[i])
	{
	case 'c':
	printf("%s%c", sep, va_arg(list, int));
	break;
	case 'i':
	printf("%s%d", sep, va_arg(list, int));
	break;
	case 'f':
	printf("%s%f", sep, va_arg(list, double));
	break;
	case 's':
	str = va_arg(list, char *);
	if (!str)
	str = "(nil)";
	printf("%s%s", sep, str);
	break;
	default:
	i++;
	continue;
	}
	sep = ", ";
	i++;
	}
	}

	printf("\n");
	va_end(list);
}
