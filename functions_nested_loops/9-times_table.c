#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * Writes a single character to the standard output.
 * @param c The character to write.
 * @return 1 on success, -1 on error.
 */

int _putchar(char c)
{
	write(1, &c, 1);
}

void print_number(int n)

	/**
	 * Prints an integer to the standard output.
	 * @param n The number to print.
	 */

{
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * Main function where the program starts its execution.
 * @return 0 if the program executes successfully.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_number(9);
		_putchar(' x ');
		print_number(i);
		_putchar(' = ');
		print_number(9 * i);
		_putchar('\n');
	}
	return (0);
}

