#include <stdio.h>
#include "main.h"

/**
 * print_numbers - imprime les chiffres de 0 a 9
 *@i: c'est la variable
 */

void print_most_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)

			_putchar ('0' + i);
		_putchar ('\n');
	}
}
