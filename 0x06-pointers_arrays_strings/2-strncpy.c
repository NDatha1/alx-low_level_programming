#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - Copy string.
 * @dest: Holds string 1.
 * @src: Holds string 2.
 * @n: No. of bytes.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[j] = src[j];
	}
	/*Fill remaining characters in dest with null bytes.*/
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);
}
