#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory of an array
 * @nmemb: number of mem
 * @size: size of each mem
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int larg;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (NULL);
	for (larg = 0; larg < (nmemb * size); larg++)
		ptr[larg] = 0;
	return ((void *)ptr);
}
