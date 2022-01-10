#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: number of char
 */
int _strcmp(char *s1, char *s2)
{
	int larg1, larg2;

	for (larg1 = 0; s1[larg1]; larg1++)
		for (larg2 = 0; s2[larg2]; larg2++)
		{
			s1[larg1] = s2[larg2];
			larg1++;
		}
	return (larg1);
}
