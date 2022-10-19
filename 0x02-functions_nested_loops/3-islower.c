#include "main.h"
/**
 * _islower - to print 1 is letter is lowercase and 0
 * if letter is uppercase.
 * @c: char type letter
 * Return: Return 0 when c is not lower case.
 *
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
