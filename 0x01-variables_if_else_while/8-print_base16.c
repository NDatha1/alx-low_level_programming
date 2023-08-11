#include <stdio.h>
/**
 * main - Entry point of code
 * Return: 0 (Sucees)
 */
int main(void)
{
	int m;
	char n;

	for (m = '0'; m <= '9'; m++)
	putchar (m);

	for (n = 'a'; n <= 'f'; n++)
	putchar (n);
	putchar ('\n');

	return (0);
}
