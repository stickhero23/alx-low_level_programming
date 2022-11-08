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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
