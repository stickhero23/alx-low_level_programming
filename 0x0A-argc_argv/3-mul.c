#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point to print multiplication
 * @argc: number of arguments
 * @argv: array of arguments to command line
 * Return: 0 if success and 1 is failure.
 */
int main(int argc, char *argv[]);
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
