#include "main.h"
/**
 * _isalpha - to print 1 is letter is lowercase or uppercase.
 * @c: char type letter
 * Return: Return 0 when c is not alphabet.
 *
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
