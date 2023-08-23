#include "main.h"
#include <stdio.h>
/**
 * *_strcat - Concatenate 2 strings.
 * @dest: Pointer to first string.
 * @src: Pointer to string to be appended.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
	dest_end++;
	}

	while (*src != '\0')
	{
	*dest_end = *src;
	dest_end++;
	src++;
	}
	*dest_end = '\0';
	return (dest);
}
