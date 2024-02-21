#include <stdio.h>
#include "main.h"

/**
 * @file 9-times_table.c
 * @brief imprimer la table de multiplication de 9
 */

#include <unistd.h>

/**
 * @brief Fonction pour imprimer un seul caractère sur la sortie standard.
 * @param c Le caractère à imprimer.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * @brief Fonction pour imprimer un nombre entier.
 * @param n Le nombre à imprimer.
 */
void print_number(int n)
{
	if (n >= 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * @brief Fonction principale du programme.
 * @return 0 si le programme s'exécute avec succès.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_number(9);
		_putchar(' x ');
		print_number(i);
		_putchar(' = ');
		print_number(9 * i);
		_putchar('\n');
	}
	return (0);
}
