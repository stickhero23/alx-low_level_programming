#include <stdio.h>
/**
 * main - entry point to find and print largest prime number
 * Return: Always 0, Success
 */
int main(void)
{
	int i;
	long pf;

	i = 612852475143;
	for (pf = 2; pf <= i; pf++)
	{
		if (i % pf == 0)
		{
			i /= pf;
			pf = 2;
		}
			pf++;
	}
	printf("%ld\n", pf);
	return (0);
}
