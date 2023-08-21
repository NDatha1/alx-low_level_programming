#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - Convert string to integer.
 * @s: Pointer to string.
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int n = 0;

	while (s[i] == ' ')
	{
	i++;
	}
	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}
	while (i < (int)strlen(s) && (s[i] >= '0' && s[i] <= '9'))
	{
	n = n * 10 + (s[i] - '0');
	i++;
	}
	return (n * sign);
}
