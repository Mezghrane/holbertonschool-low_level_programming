#include <stdio.h>
#include "main.h"


/**
 * @print_triangle
 * Prints a right-angled triangle composed of '#' characters.
 *
 * The size of the triangle is determined by the parameter 'size'. If 'size' is
 * less than or equal to 0, the function does not print anything.
 *
 * @size The size of the triangle.
 */

void print_triangle(int size)
{
	int i, j;


	for (j = size - 1; j >= 0; j--)
	{

		if (j == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
		}
	}

	for (i = 0; i <= size; i++)
	{
		_putchar('#');
		_putchar('\n');
	}
}
