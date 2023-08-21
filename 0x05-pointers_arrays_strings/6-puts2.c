#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Print every character of a string.
 * @str: Pointer for string.
 * Return: 0.
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	putchar (str[i]);
	}
	putchar ('\n');
}
