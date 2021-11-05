#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change lowercase for uppercase
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int larg;

	for (larg = 0; s[larg]; larg++)
	{
		if (s[larg] >= 'a' && s[larg] <= 'z')
		{
			s[larg] = s[larg] - 32;
		}
	}
	return (s);
}
