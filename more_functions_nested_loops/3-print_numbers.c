#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include "_putchar.c"

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

