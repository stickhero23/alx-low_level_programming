#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry to print the sum
 * @argc: number of arguments
 * @argv: array of arguments, string
 * Return: returns 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum, i;
	char *p;
	int num;

	sum = 0;
	if (argc > 0)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
