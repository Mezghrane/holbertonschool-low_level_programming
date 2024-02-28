#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: Pointer to an integer 1
 * @b: Pointer to an integer 2
 *
 * Return: int *a, int *b
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
