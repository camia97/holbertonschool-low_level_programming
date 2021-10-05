#include "main.h"
/**
 *print_alphabet_x10 - Prints alphabet x10
 * Return: 0
*/
void print_alphabet_x10(void)
{
	int a, b;

	for (b = 1 ; b <= 10 ; b++)
	{
		for (a = 97 ; a <= 122 ; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
