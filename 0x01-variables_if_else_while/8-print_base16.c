#include <stdio.h>
/**
 * main - Entry point to print the letters in lower case.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex16 = '0';

	while (hex16 <= '9')
	{
		putchar(hex16);
		hex16++;
	}
	hex16  = 'a';

	while (hex16 <= 'f')
	{
		putchar(hex16);
		hex16++;
	}
	putchar('\n');

	return (0);
}
