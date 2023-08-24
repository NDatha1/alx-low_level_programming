#include "main.h"
#include <stdio.h>

/**
 * print_number - Output integer.
 * @n: Holds integer.
 * Return: Empty
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
	_putchar ('-');
	num = -num;
	}

	if ((num / 10) > 0)
	print_number(n / 10);
	_putchar((n % 10) + '0');
}
