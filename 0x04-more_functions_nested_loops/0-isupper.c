#include "main.h"
/**
 * _isupper - Entry point to check if uppercase.
 * @c: print int
 *
 * Return: Always 0, otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
