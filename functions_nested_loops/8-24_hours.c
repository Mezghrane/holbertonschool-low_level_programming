#include <stdio.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: This function uses two nested loops to generate every minute
 * of the day. The outer loop represents the hours and the inner loop
 * represents the minutes. The printf function is used to print the time,
 * formatted with leading zeros if necessary.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
	}
}

