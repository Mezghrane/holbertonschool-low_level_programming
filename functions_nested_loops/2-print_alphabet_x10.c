#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercas
 *
 * description
 * each line containing the entire alphabet in lower from a to z
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
