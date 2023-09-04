#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Join 2 srings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: Concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *n;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[i])
	i++;
	while (s2[j])
	j++;

	l = i + j;
	n = malloc((sizeof(char) * l) + 1);

	if (n == NULL)
	return (NULL);

	j = 0;
	while (k < l)
	{
	if (k <= i)
	n[k] = s1[k];

	if (k >= i)
	{
	n[k] = s2[j];
	j++;
	}
	k++;
	}
	n[k] = '\0';
	return (n);
}
