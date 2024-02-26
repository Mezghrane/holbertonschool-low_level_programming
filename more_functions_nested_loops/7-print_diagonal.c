#include<stdio.h>
#include "main.h"

/**
 *
 *print_diagonal - imprime une ligne diagonale.
 *@i: la variable
 *
 */


void print_diagonal(int n)
{
	int i, j;

	for(i = 1; i < n; i++)
	{
		_putchar ('\\');

	}
	_putchar ('\n');

	for(j = 1; j < n; i++)


	{ 
		_putchar (' ');
	}
}
