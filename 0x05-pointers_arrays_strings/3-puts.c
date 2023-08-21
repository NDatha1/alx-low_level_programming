#include "main.h"
#include <stdio.h>
/**
 * _puts - Print string followed by \n.
 * @str: Pointer for string.
 * Return: Empty.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar (*str);
	str++;
	}
	putchar ('\n');
}
