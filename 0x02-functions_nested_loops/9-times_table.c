#include "main.h"
/**
 * times_table - Entry point for printing times table
 *
 * Return: Always 0, success.
 */
void times_table(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			k = i * j;

			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
