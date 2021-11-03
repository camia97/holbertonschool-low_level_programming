#include "main.h"
/**
 * main- void
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
		for (b = 0; b <= 9; b++)
		{
			_putchar(a);
			_putchar(b);
			_putchar(' ');
		}
	_putchar(a);
	_putchar(b);
	_putchar(',');
}
