#include "main.h"
/**
 * set_bit - set the value of a bit
 * @n: pointer to number
 * @index: a
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index > 63)
		return (-1);
	(*n) = (*n) | (1 << index);
	return (1);
}
