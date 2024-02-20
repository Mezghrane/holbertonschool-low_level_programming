#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void _putchar(char c)
{
    putchar(c);
}

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
