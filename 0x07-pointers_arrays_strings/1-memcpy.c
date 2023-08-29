#include "main.h"
/**
 * _memcpy - Copy a meory area.
 * @dest: Area to copy to.
 * @src: Area to copy from.
 * @n: No. of bytes to copy.
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
