#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer to type har
 * @needle: pointer to type char
 * Return: returns s or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = i;
			k = 0;
			while (needle[j] != '\0')
			{
				if (haystack[j] == needle[k])
					j++, k++;
				else
					break;
			}
			if (needle[k] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (0);
}
