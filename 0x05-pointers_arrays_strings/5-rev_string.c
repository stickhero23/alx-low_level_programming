#include "main.h"
/**
 * rev_string - prints a string in reverse.
 * @s: pointer of type char.
 * Return: Always 0, Success
 */
void rev_string(char *s)
{
	int i, j, k;
	char m;

	for (i = 0; s[i] != '\0'; i++)
		;
	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		m = s[j];
		s[j] = s[i];
		s[i] = m;
	}
}
