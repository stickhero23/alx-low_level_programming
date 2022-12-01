#include "main.h"
/**
 * leet - encoding 1337
 * @s: string
 * Return: The encoded string
 */
char *leet(char *s)
{
	int i;
	int j = 0;
	char *m = "aAeEoOlLtT";
	char *n = "4433001177";

	for (i = 0;s[i] != '\0';i++)
	{
		while (*(m + i) != '\0')
		{
			if (*(s + i) == *(m + j))
				*(s + i) = *(n + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
