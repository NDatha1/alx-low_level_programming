#include "main.h"
#include <stdio.h>
/**
 * _strlen - Show string length.
 * @s: Pointer to character.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
