#include "main.h"
/**
 * _strncat - concatenate two strings to n
 * @dest: poiter char
 * @src: pointer char
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a])
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
