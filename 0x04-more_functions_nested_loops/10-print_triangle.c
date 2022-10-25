#include "main.h"
/**
 * print_triangle- prints a triangle.
 * @size: int type number
 * Return: Always 0, success.
 */
void print_triangle(int size)
{
	int base, height, m;

	base = 0;
	height = size - 1;
	while (base < size)
	{
		height = size - 1 - base;
		m = base + 1;

		while (height > 0)
		{
			_putchar(' ');
			height--;
		}
		while (m > 0)
		{
			_putchar('#');
			m--;
		}
		_putchar('\n');
		base++;
	}

	if (size <= 0)
		_putchar('\n');
}
