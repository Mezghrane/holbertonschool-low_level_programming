#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include "main.h"

void print_alphabet(void);
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
putchar('\n');

return (0);
}
