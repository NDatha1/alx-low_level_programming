#include "main.h"
#include <string.h>
/**
 * rev_string - Reverse string.
 * @s: Pointer for string.
 * Return: Empty.
 */
void rev_string(char *s)
{
	int i = 0, j = strlen(s) - 1;
	char temp;

	while (i < j)
	{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	i++;
	j--;
	}
}
