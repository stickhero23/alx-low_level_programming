#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to type char
 * @accept: type char substring
 * Return: number of bytes s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != '\0')
				return (k);
			j++;
		}
		i++;
	}
	return (k);
}
