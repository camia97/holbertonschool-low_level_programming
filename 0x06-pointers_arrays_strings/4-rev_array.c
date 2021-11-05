#include "main.h"
#include <stdio.h>
/**
 * revers_array - reverse an array
 * @a: pointer to array
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int cont, aux, acont = 0;

	for (cont = n - 1; cont >= (n / 2); cont--)
	{
		aux = a[acont];
		a[acont] = a[cont];
		a[cont] = aux;
		acont++;
	}
}
