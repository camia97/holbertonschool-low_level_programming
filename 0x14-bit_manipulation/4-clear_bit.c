#include "main.h"
/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer to number
 * @index: the place of the bit
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index > 63)
		return (-1);
	(*n) = (*n) & ~(1 << index);
	return (1);
}
