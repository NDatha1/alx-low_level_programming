#include "main.h"
#include "stddef.h"
/**
 * _strchr - Locate character on a string.
 * @c: Character to be checked.
 * @s: The string.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}

	if (c == '\0')
	{
	return (s);/* return a pointer to the null-terminator for c == '\0'*/
	}
	return (NULL); /*cHARACTER NOT FOUND.*/
}
