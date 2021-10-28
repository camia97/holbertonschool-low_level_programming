#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: null if fails or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int larg1, larg2, larg3, larg4;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (larg1 = 0; s1[larg1] != '\0'; larg1++)
		;
	for (larg2 = 0; s2[larg2] != '\0'; larg2++)
		;
	if (n >= larg2)
		n = larg2;
	ptr = malloc(sizeof(char) * (larg1 + n) + 1);
	if (ptr == 0)
		return (0);
	for (larg3 = 0; larg3 < larg1; larg3++)
	{
		ptr[larg3] = s1[larg3];
	}
	for (larg4 = larg3; larg4 < larg3 + n; larg4++)
	{
		ptr[larg4] = s2[larg4 - larg3];
	}
	return (ptr);
}
