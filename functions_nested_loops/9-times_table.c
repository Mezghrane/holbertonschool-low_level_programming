#include "main.h"

/**
 * times_table - Prints a multiplication table from 0 to 9
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}

