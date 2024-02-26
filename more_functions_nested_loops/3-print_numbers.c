#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - pour imprimer un chharactere a la fois 
 * @c: character to be output
 */
void _putchar(char c)
{

/**
 * write- c'est pour ecrire 
 *
 *
 */

    write(1, &c, 1);
}


/**
 * print_numbers - imprime les chiffres de 0 a 9
 * 
 */

void print_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

		putchar('\n');
}

