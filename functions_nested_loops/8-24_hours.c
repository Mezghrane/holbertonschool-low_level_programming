#include <stdio.h>
#include <stdio.h>

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
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
