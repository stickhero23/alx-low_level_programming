#include "main.h"
/**
 * more_numbers - Entry point, prints 0 to 14 ten times
 * Return: Always 0, success.
 */
void more_numbers(void)
{
	int i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 >= 10)
				_putchar((i / 10) + 48);}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
