#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to compute the absolute value of
 *
 * Description: This function checks if the input number `n` is negative.
 * If it is, the function returns `-n` which is the absolute value of `n`.
 * If `n` is not negative the function simply returns `n`.
 *
 * Return: The absolute value of the input number `n`
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
