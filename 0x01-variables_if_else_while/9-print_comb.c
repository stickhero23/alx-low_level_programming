#include <stdio.h>
/**
 * main - Entry point to print all possible combinations of single digit
 * numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int j = '0';

	while (j <= '9')
	{
		putchar(j);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}

		j++;
	}
	putchar('\n');

	return (0);
}
