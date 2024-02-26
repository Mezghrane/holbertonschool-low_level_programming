#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 *
 * Description: This function takes an ASCII value as input and checks
 * if it corresponds to a lowercase character in the alphabet.
 *
 * Return: 1 if c is appercase, 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
{
		return (1);
}
else
{
	return (0);
}
}
