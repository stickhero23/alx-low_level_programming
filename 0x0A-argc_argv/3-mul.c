#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point to print multiplication.
 *@argc: number of arguments
 *@argv: array of string
 *Return: Always 0, success
 */
int main(int argc, int *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
