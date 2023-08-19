#include "main.h"
/**
 * print_line - Outputs a straight line.
 * @n: No. of dashes to print.
 * Return: Void.
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar (95);
	}
	_putchar ('\n');
	}
}
