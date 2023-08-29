#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strpbrk - Search string for any no. of bytes.
 * @s: Pointer to string.
 * @accept: Pointer to string.
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	if (strchr(accept, *s) != NULL)
	{
	return (s);
	}
	s++;
	}
	return (NULL);
}
