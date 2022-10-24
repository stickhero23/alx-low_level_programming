#include "main.h"
/**
 * more_numbers - Entry point, prints 0 to 14 ten times
 * Return: Always 0, success.
 */
void more_numbers(void)
{
	int i;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
