#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char
 */
void rev_string(char *s)
{
	int a = 0, c;
	char x;

	while (s[a] != '\0')
		a++;
	a--;
	for (c = 0 ; c < a - c ; c++)
	{
		x = s[c];
		s[c] = s[a - c];
		s[a - c] = x;
	}
}
