#include <stdio.h>
#include <unistd.h>

void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main() {
    write(1,"_",1);
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    
    return 0;
}
