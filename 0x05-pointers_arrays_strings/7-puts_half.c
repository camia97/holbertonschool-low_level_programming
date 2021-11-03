#include "main.h"
/**
 *puts_half - half of a string
 *@str: pinter string
 *Return: str
 */
void puts_half(char *str)
{
	int larg = 0, a;

	while (str[larg] != '\0')
	{
		larg++;
	}
	for (a = (larg - 1) / 2; a < '\0'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
