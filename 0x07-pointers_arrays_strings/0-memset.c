#include "main.h"
/**
 * _memset - Fill memory with constant byte.
 * @s: Pointer.
 * @b: Constant byte.
 * @n: No. of bytes.
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
