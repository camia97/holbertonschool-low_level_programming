#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer of string
 * @c: var char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	char *p;
	int ini;

	for (ini = 0; s[ini] && s[ini] != c; ini++)
	{
	}
		if (s[ini] == c)
		{
			p = s + ini;
			return (p);
		}
		else
			return (0);

}
