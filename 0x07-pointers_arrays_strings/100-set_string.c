#include "main.h"
#include <stddef.h>
/**
 * set_string -  Set the value of a pointer to a char.
 * @s: Pointer to pointer.
 * @to: Pointer.
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
