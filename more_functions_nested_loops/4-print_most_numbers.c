#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 */

int _putchar(char c);


/**
 * print_numbers - imprime les chiffres de 0 a 9
 *
 */

void print_most_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)

			_putchar ('0' + i);
	}
}
