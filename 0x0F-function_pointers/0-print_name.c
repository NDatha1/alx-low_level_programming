#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name.
 * @name: Pointer
 * @f: Function pointer.
 * Return: Empty
 */
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
