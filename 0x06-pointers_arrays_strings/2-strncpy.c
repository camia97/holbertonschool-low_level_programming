#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: pointer string
 * @src: pointer string
 * @n: int
 * Return: char type
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a]; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
		dest[a] = 0;
	return (dest);
}
