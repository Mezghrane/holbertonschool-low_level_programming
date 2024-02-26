#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_numbers - imprime les chiffres de 0 a 9
 * _putchar - affiche 1 charactere a la fois 
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

