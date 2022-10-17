#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * The program assigns a random number to n and checks if negative,
 * positive or 0
 * Return: Always 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else if (n < 0)
	{
		printf("The number is negative\n");
	}
	else
		printf("The number is zero\n");
	return (0);
}

