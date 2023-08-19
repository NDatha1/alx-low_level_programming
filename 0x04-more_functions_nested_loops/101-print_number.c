#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer.
 * @n: Integer to print.
 * Return: Voiid.
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
	_putchar ('_');
	m = -m;
	}
	if (m > 9)
	{
	print_number(m / 10);
	}
	_putchar (m % 10 + '0');
}
