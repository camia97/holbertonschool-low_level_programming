#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size : int
 *Return: void
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	for (a = 0 ;  a < size ; a++)
	{
		for (b = 1 ; b < size - a ; b++)
		{
			_putchar(' ');
		}
		for (c = 0 ; c <= a ; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
