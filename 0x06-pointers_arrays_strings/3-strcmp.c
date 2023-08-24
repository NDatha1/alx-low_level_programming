#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare 2 strings.
 * @s1: Holds first string.
 * @s2: Holds second string.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}
	s1++;
	s2++;
	}
	/*Compare the null terminators(last characters).*/
	return (*s1 - *s2);
}
