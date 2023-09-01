#include "main.h"
#include <stdio.h>
/**
 * main - Print the number of args.
 * @argc: Argument count.
 * @aegv: Argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
