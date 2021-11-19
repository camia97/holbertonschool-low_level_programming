#include "main.h"
/**
 * get_bit - return the value of a given bit
 * @n: ulint
 * @index: given bit
 * Return: value of index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1 << index)) >> index);
}
