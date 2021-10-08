#include "main.h"
/**
 *print_line - draws a straight line in the terminal
 *@n : int
 *Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(n * '_');
	}
	_putchar('\n');
}
