#include "main.h"
/**
 *_isupper - checks for uppercase character
 *@c : int
 *Return: 0, 1
 */
int _isupper(int c)
{
	int a;
	int b = 1;

	for (a = 'A' ; a < 'Z' ; a++)
	{
		if (c != a)
		{
			return (0);
		}
		return (1);
	}
	return (b);
}
