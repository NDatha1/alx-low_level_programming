#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/**
 * *leet - Encode string to 1337.
 * @str : Holds String to be encoded.
 * Return: Always 0.
 */
char *leet(char *str)
{
	char *original = str;
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] == 'a' || str[i] == 'A')
	{
	str[i] = '4';
	}
	else if (str[i] == 'e' || str[i] == 'E')
	{
	str[i] = '3';
	}
	else if (str[i] == 'o' || str[i] == 'O')
	{
	str[i] = '0';
	}
	else if (str[i] == 't' || str[i] == 'T')
	{
	str[i] = '7';
        }
	else if (str[i] == 'l' || str[i] == 'L')
	{
	str[i] = '1';
	}
	i++;
	}
	return original;
}