#include "main.h"
/**
 * _isdigit - Entry point that checks if c is digit.
 * @c: int type number
 * Return: Always 0, success.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
