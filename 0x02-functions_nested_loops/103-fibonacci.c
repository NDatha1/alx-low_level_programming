#include "main.h"
#include <stdio.h>
/**
 * main - Entry point.
 *less than 400000.
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 400000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%d\n", sum);
	return (0);
}
