#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strspn - Get length of a prefix substring.
 * @s: Memory segment.
 * @accept: Provides no. of bytes.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
	length++;
	s++;
	}
	return (length);
}
