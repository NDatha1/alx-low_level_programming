#include "main.h"
/**
 * print_most_numbers - Output no.s from 0 to 9 bt 2 & 4.
 * Return: Void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar (i + '0');
	}
	}
	_putchar ('\n');
}
