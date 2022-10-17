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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("The last digit of %i is %i and is geater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("The last digit of %i is %i and is less tha 5\n", n, m);
	}
	else
		printf("The last digit of %i is %i and is less than 6 and not zero\n", n, m);
	return (0);
}

