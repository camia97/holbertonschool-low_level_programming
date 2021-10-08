#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 *Return: void
 */
void more_numbers(void)
{
	int num;
	int b;

	for (num = 0 ; num < 10 ; num++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b >= 10 && b <= 14)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
