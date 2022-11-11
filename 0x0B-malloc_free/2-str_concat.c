#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one to be concatenated
 * @s2: string 2 to be concatenated.
 * Return: returns NULL or pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		len1++, i++;
	while (s2[j])
		len2++, j++;
	len2++;

	c = malloc(sizeof(char) * (len1 + len2));

	if (c == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		c[i] = s[i];
		i++;
	}
	while (j < len2)
	{
		c[i] = s2[j];
		i++, j++;
	}
	return (c);

}
