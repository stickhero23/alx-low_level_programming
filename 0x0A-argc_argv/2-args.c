#include <stdio.h>
/**
 * main - entry point.
 * @argc: number of arguments
 * @argv: array of strings of arguments.
 * Return: Always 0, success
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
