#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - Change all lower case to upper case.
 * @str: Holds string to change.
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	char *original = str;/** Store original pointer for returning.*/

	while (*str != '\0')
	{
	if (islower(*str))
	{
	*str = toupper(*str);
	}
	str++;
	}
	return (original);
}
