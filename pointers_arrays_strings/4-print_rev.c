#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: Pointer to an integer
 *
 * Return: char *n
 */

void print_rev(char *s)
{
	int i; 

        int length = 0;
    
    while (*s != '\0') 
    {
        length++;
        s++;
    }
    
    for (i = length - 1; i >= 0; i--) 
    {
        putchar(*(s - i - 1));
    }

    putchar('\n');
}
