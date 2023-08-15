#include "main.h"
/**
 * print_sign - Print positive or negative sign of a number.
 * @: Number to be looked at.
 * Return: 0 if zero, + if bigger , - if smaller and print.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
