#include "main.h"
/**
 * _strpbrk - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to string
 * Return: number of bytes of s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	int c = 0;
	char *ptr;

	ptr = &s[c];

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; accept[b] != '\0'; b++)
	{
		if (s[a] == accept[b])
		{
			c++;
		}
	}
	return (0);
	}
	return (ptr);
}
