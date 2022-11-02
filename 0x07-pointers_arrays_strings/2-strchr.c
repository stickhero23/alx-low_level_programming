#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to type char
 * @c: type char
 * Return: returns position of the character or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (0);
	}
}
