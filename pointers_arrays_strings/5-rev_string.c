#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: Pointer to an integer
 *
 * Return: char *n
 */

void rev_string(char *s)
{
        int i;

        int length = 0;

        while (s[length] != '\0')
        {
                length++;
        }

        for (i = length - 1; i >= 0; i--)
        {
                printf("%c", s[i]);
        }

        printf("\n");
}
