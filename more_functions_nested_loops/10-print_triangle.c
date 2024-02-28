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

    for (i = 1; i <= size; i++)
    {
        for (j = size - i; j > 0; j--)
        {
            _putchar(' ');
        }
       
        for (j = 0; j < i; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
