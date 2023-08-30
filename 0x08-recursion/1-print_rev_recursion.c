#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Print string in reverse.
 * @s: Pointer to string.
 * Return: Empty.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')/* End of string*/
	{
	return;
	}

	_print_rev_recursion(s + 1);/*Recurse to next character*/
	_putchar (*s);/*Print next char after recursion unwinds*/
}
