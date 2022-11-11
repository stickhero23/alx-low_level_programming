#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string.
 * @str - string 
 * Return: returns NULL or a string.
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		len++, i++;
	len++;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
