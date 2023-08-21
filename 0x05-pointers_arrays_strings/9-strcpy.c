#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Copy string pointed to by src.
 * @dest: Pointer to buffer.
 * @src: Pointer for string.
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (p);
}
