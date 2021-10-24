#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer destino
 * @src: pointer fuente
 * @n: unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ini;

	for (ini = 0; dest[ini] != '\0' && ini < n; ini++)
		dest[ini] = src[ini];
	return (dest);
}
