#include "main.h"
/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: pointer to type char
 * @accept: tpe char from which to check set of bytes.
 * Return: return a pointer to s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
