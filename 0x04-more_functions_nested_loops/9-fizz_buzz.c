#include <stdio.h>
/**
 * main - Entry point to print FizzBuzz, Fizz, Buzz or number
 * Return: Always 0, Success.
 */
int main(void)
{
	int c;

	c = 1;

	printf("%d", c);

	for (c = 2; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (c % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", c);
		}
	}
	printf("\n");

	return (0);
}
