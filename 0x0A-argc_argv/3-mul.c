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
	(void) argc;
	int mult;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
}
