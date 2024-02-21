#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 and prints '+' if n is greater than zero
 *         0 and prints '0' if n is zero
 *         -1 and prints '-' if n is less than zero
 */

int _putchar(char c);

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
