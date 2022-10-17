#include <stdio.h>
/**
 * main - Entry point to print the letters in lower case except q & e.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && (ch != 'q' || ch != 'e'))
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
