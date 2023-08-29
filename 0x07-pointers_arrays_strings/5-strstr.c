#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locate a substring.
 * @haystack: Poinnter to big string.
 * @needle: Pointer to substring.
 * Return: always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
	return (haystack);  /*Empty needle, return haystack*/
	}

	while (*haystack != '\0')
	{
	char *h = haystack;
	char *n = needle;

	while (*n != '\0' && *h == *n)
	{
	h++;
	n++;
	}

	if (*n == '\0')
	{
	return (haystack);
	}
	haystack++;
	}
	return (NULL);/*SUBSTRING NOTFOUND*/
}
