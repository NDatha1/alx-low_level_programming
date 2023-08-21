#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Show 1/2 of string then \n.
 * @str: Pointer to string.
 * Return: Empty
 */
void puts_half(char *str)
{
	int j = 0, k;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}

	for (; k < j; k++)
	{
	putchar (str[k]);
	}
	putchar ('\n');
}

