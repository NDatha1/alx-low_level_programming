#include "main.h"
/**
 * print_square - Output a hash square.
 * @size: Siz of square.
 * Return: Void.
 */
void print_square(int size)
{
	int m, n;

	if (size <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (m = 0; m < size; m++)
	{
	for (n = 0; n < size; n++)
	{
	_putchar (35);
	}
	_putchar ('\n');
	}
	}
}
