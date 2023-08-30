#include "main.h"
#include <string.h>
/**
 * _puts_recursion - Printy string followed by a new line.
 * @s: Pointer to string.
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar ('\n');
	return;
	}
	putchar (*s);
	_puts_recursion(s + 1);
}
