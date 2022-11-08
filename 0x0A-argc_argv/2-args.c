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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}

	return (0);
}
