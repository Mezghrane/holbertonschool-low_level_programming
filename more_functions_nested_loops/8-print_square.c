#include <stdio.h>
#include "main.h"

/**
 *print_square - Prints a square composed of '#' characters.
 *
 * The size of the square is determined by the parameter 'size'.
 * If 'size' is less than or equal to 0, the function prints only a newline.
 *
 * @size The size of the square.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)

			_putchar('#');

		_putchar('\n');
	}

}
