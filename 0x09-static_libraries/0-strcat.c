#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: char string
 *@src: char string
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[a] = src[i];
		a++;
	}
	return (dest);
}
