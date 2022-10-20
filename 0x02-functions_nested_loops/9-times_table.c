#include "main.h"
/**
 * times_table - Entry point for printing times table
 *
 * Return: Always 0, success.
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (j == 0)
			{
				_putchar('0' + product);
			}
			else if (j <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
