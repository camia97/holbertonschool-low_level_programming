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
	int c = 1;
	char *ptr;

	for (a = 0; s[a] != '\0'; a++)
	for (b = 0; accept[b] != '\0'; b++)
	{
		if (s[a] == accept[b])
		{
			c++;
			ptr = &s[c];
			return (ptr);
		}
		break;
	}
	return (0);
}
