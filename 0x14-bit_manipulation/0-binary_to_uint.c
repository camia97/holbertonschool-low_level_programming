#include "main.h"
/**
 * binary_to_uint - convert a binary number to uint
 * @b: pointer to string of 0 and 1
 * Return: the convert number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, a, res, bn;
	
	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	bn = atoi(b);
	for (a = 0; bn; a++)
	{
		res = bn % 10;
		conv += res << a;
		bn = bn / 10;
	}
	return (conv);
}
