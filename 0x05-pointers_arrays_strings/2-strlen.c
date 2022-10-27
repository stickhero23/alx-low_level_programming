#include "main.h"
/**
 * _strlen - obtains length of a string
 *@s: pointer of type char.
 *Return: Always 0, succes.
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
