#include <stdio.h>
/**
 * main - entry point to find and print largest prime number
 * Return: Always 0, Success
 */
int main(void)
{
	long int i, pf;

	i = 612852475143;
	for (pf = 2; pf <= i; pf++)
	{
		if (i % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld", pf);
	return (0);
}
