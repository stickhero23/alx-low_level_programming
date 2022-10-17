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
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
		printf("%i is zero\n", n);
	return (0);
}

