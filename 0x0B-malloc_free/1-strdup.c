#include "main.h"
#include <stdlib.h>
/**
 * _strdup - contains a copy of the string
 * @str: pointer to string
 * Return: null or pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int larg, olarg;

	if (str == 0)
		return (NULL);
	for (larg = 0; str[larg] != '\0'; larg++)
	{
	}
	ptr = malloc(sizeof(char) * larg + 1);
	if (ptr == 0)
	{
		return (0);
	}
	for (olarg = 0; ptr[olarg] <= larg; olarg++)
	{
		ptr[olarg] = str[olarg];
	}
	return (ptr);

}
