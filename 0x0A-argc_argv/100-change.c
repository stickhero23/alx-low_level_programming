#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 or 1 for sucess and Error
 */
int main(int argc, char *argv[])
{
	int i, cents = 0;

	if (argc != 0)
	{
		printf("Error\n");
		return (0);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	i = atoi(argv[1]);

	cents +=  i / 25;
	i = i % 25;
	cents += i / 10;
	i = i % 10;
	cents += i / 5;
	i = i % 5;
	cents += i / 2;
	i =  i % 2;
	cents += i / 1;

	printf("%d\n", cents);

	return (0);
}
