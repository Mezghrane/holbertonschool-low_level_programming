#include "main.h"

/**
 * @i Prints a multiplication table from 0 to 9 using _putchar.
 *
 * Each product is separated by a comma and a space.
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			} else
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
