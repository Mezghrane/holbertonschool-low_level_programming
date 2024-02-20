#include <stdlib.h>
#include <time.h>
#include <main.h>
/* more headers goes there */

/* betty style doc for function main goes there */

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
