#include "main.h"

/**
 *  _strlen -  returns the length of a string.
 *
 * @length: the length of the string
 *
 * Return: char *s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

