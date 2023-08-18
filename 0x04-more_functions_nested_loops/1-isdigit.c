#include "main.h"
/**
 * _isdigit - Check if character is digit.
 * @c: Integer to be checked.
 * Return: 1 if int is ineger and 0 if character.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
