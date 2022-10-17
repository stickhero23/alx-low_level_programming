#include <stdio.h>
/**
 * main - Entry point to print the letters in lower case.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	char CH  = 'A';

	while (CH <= 'Z')
	{	
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
