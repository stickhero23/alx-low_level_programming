#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: a pointer to char
 * Return: char
 */
char *rot13(char *s)
{
	int i;
	int j = 0;
	char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(r13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
