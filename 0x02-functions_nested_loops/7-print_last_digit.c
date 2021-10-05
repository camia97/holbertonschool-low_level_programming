#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: absolute value
 * Return: absolute vaule of n
*/
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n >= 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar((ld * (-1)) + '0');
		return (ld * (-1));
	}

}
