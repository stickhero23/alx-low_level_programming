#include "main.h"
/**
 * leet - encoding 1337
 * @s: string
 * Return: The encoded string
 */
char *leet(char *s)
{
	int i, j;
	int m[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = 0; m[i] != '\0'; i++)
		{
			if (s[i] == m[i])
				s[i] = n[i];
		}
	}
	return (s);
}
