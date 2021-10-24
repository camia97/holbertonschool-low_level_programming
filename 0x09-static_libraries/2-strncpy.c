#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer string
 * @src: pointer string
 * @n: int
 * Return: char type
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	if (dest[b] > n)
	{
		dest[b] = '\0';
	}
	dest[b] = '\0';
	return (dest);
}
