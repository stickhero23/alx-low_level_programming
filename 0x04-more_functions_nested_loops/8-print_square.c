#include "main.h"
/**
 * print_square - Prints square
 * @size: int type number
 */
void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		column = 0;

		while (column < size)
		{
			row = 0;

			while (row < size)
			{
				_putchar('#');
				row++;
			}
		_putchar('\n');
		column++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
