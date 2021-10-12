#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: char
 */
void print_rev(char *s)
{
	int a;
	int b = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		b++;
	}
	for (b--; b >= 0 ; b--)
	{
	_putchar(s[b]);
	}
	_putchar('\n');
}
