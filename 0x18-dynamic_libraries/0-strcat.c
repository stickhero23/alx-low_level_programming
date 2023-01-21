#include "main.h"
/**
 * *_strcat - appends the src string to the dest string,
 * @dest: char string
 * @src: char string
 * Return: Always 0, success
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}
