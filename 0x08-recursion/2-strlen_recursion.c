#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: pointer of string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		a++;
		return (a + _strlen_recursion(s + 1));
	}
}
