#include "main.h"
/**
 * flip_bits - return the number of bits to flip
 * @n: numb
 * @m: numb 2
 * Return: the numbers to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, c = 0;

	num = n ^ m;

	while (num)
	{
		if (num & 1)
			c++;
		num >>= 1;
	}
	return (c);
}
