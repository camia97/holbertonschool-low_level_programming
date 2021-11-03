#include "main.h"
/**
 *aux - funcion auxiliar primos
 *@v: int
 *@r: int
 *Return: funcion
 */
int aux(int v, int r)
{
	if (v % r == 0)
	{
		return (0);
	}
	else
	{
		return (aux(v, r + 1));
	}
	return (1);

}

/**
 * is_prime_number - int is a prime number
 * @n: int
 * Return: 1 if is prime or 0
 */
int is_prime_number(int n)
{
		return (aux(n, 2));
}
