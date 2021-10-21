#include "main.h"
/**
 * aux - auxiliar function
 * @v: int
 * @r: int
 * Return: returns the natural square root of a number
 */

int aux(int v, int r)
{
	if (r * r == v)
	{
		return (r);
	}
	if (r * r > v)
	{
		return (-1);
	}
	else
	{
		return (aux(v, r + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (aux(n, 0));
	}
}
