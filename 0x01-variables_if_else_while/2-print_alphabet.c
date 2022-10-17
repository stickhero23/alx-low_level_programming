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
		putchar("%c", ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
