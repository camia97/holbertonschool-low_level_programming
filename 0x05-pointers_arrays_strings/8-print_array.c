#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: pointer array
 * @n: int
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; a[c] <= n; c++)
	{
		printf("%d, \n", c);
	}
}
