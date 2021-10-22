#include "main.h"
/**
 *aux - funcion auxiliar primos
 *@v: int
 *@r: int
 *Return: funcion
 */
int aux(int v, int r)
{
	if (v % v == 0 && v % 1 == 0)
	{
		return (v);
	}
	if (v % r == 0)
	{
		return (aux(v, r + 1));
	}
}

/**
 * is_prime_number - int is a prime number
 * @n: int
 * Return: 1 if is prime or 0
 */
int is_prime_number(int n)
{
	if (aux(n, 2))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
