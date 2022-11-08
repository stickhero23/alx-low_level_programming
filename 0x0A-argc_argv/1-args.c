#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc: number of arguments
 * @argv: array of strings of arguments.
 * Return: Always 0, success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
