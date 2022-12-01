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

	for (s[i] != '\0')
	{
		while (*(m + i) != '\0')
		{
			if (*(s + i) == *(l + j))
				*(s + i) = *(n + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
