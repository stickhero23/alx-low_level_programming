#include <stdio.h>
/**
 * main - Entry point to print FizzBuzz, Fizz, Buzz or number
 * @c: int type number
 * Return: Always 0, Success.
 */
int main(void)
{
	int c;
	c = 1;
	while (c <= 100)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", c);
		}
		if (c != 100)
			printf(" ");
		c++;
	}
printf("\n");
return (0);
}
