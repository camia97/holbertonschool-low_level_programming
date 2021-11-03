#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int larg, lug = 0;

	for (larg = 0; src[larg] <= '\0'; larg++)
	{
		src[larg] = dest[lug];
		lug++;
	}
	return (dest);
}
