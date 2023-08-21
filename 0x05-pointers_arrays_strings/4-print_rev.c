#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Print a string backwards.
 * @s: Pointer for string.
 * Return:  Empty.
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
	putchar (s[i]);
	i--;
	}
	putchar ('\n');
}
