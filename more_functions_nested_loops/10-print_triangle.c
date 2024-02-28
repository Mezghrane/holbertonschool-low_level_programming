#include <stdio.h>
#include "main.h"


/**
 * print_triangle - Prints a right-angled triangle composed of '#' characters.
 * @size The size of the triangle.
 *
 * Return : int size
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

	for (i = 0; i < j; i++)
	{
		_putchar('#');
		_putchar('\n');
	}
}
