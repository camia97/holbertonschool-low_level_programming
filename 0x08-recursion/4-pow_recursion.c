#include "main.h"
/**
 * _pow_recursion -  value of x raised to the power of y
 * @x: int
 * @y: int
 * Return:  value of x raised to the power of y or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (x == 0 || x == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
