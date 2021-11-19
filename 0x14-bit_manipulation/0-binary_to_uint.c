#include "main.h"
/**
 * binary_to_uint - convert a binary number to uint
 * @b: pointer to string of 0 and 1
 * Return: the convert number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int a, larg;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	larg = (a - 1);
	for (a = larg; a >= 0; a--)
	{
		if (b[a] == '1')
		{
			conv += 1 << (larg - a);
		}
	}
	return (conv);
}
