#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ini;

	for (ini = 0; ini < n; ini++)
		s[ini] = b;
	return (s);
}
