#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: int
 * @c: char
 * Return: null if size is 0 or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int larg;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (NULL);
	for (larg = 0; larg <= size; larg++)
	{
		ptr[larg] = c;
	}
	if (size == 0)
		return (NULL);
	else
		return (ptr);
	return (NULL);
}
