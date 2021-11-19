#include "main.h"
/**
 * print_binary - prints a binary number
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux = n;
	int c, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (c = 63; c >= 0; c--)
	{
		aux = n >> c;
		if (aux & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
			_putchar('0');
	}
}
