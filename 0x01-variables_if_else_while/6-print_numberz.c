#include <stdio.h>
/**
 * main - Entry point to print the numbers 0 to 9.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
