#include <stdio.h>
/**
 * main - print name from where compiled from.
 * Return: Always 0.
 */
int main(void)
{
	printf("Compiled from: %s\n", __FILE__);
	return (0);
}
