#include <stdio.h>
/**
 * main - Entry point to print the numbers z to a.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char j = 'z';

	while (j >= 'a')
	{
		putchar(j);
		j--;
	}
	putchar('\n');

	return (0);
}
