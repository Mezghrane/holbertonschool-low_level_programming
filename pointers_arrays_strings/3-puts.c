#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: Pointer to a string
 *
 * Return: char *str
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}
