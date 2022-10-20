#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * numbers are separated by commas, followed by space.
 * last number printed is 98.
 * @n: int type number
 * Return: Always 0, success.
 */
int print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				print(", ");
			}
			n++;
		}
	}
	printf("\n");
}
