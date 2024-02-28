#include "main.h"
#include <stdio.h>

/**
 *
 *Parcourez une liste de nombres de 1 a 100.
 * Pour chaque nombre :
 * Si le nombre est divisible par 3, imprimez "Fizz".
 * Si le nombre est divisible par 5, imprimez "Buzz".
 * Si le nombre est divisible par 3 et 5, imprimez "FizzBuzz".
 * Sinon, imprimez simplement le nombre.
 *
 */

int main (void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0) 
			printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else    printf("%d", i);
	}

	{
	       	if (i < 100)
			printf(" ");
		
		else	printf("\n");
	}
	
	return (0);

}
