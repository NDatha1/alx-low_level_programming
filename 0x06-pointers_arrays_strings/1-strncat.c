#include "main.h"
#include <stdio.h>
/**
 * *_strncat - Join 2 strings with at most n bytes.
 * @dest: Holds first string.
 * @src: Holds second string.
 * @n: No. of bytes to use.
 * Return: Pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/*Find the end of dest string*/
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
	dest_end++;
	}
	/*Copy at most n bytes from src to dest*/
	while (*src != '\0' && n > 0)
	{
	*dest_end = *src;
	dest_end++;
	src++;
	n--;
	}
	/*Add a terminating null byte.*/
	*dest_end = '\0';
	return (dest);
}
