#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n : int
 *Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0 ;  a < n ; a++)
	{
		for (b = 0 ; b < a ; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
