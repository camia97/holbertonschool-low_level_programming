#include "main.h"
#include <stdio.h>
/**
*print_to_98 - prints all natural numbers to 98
*@n : int
* Return: 0
*/
void print_to_98(int n)
{
	int a;

	for (a = n ; a >= 99 ; a--)
	{
		if (a >= 99)
			{
			printf("%d, ", a);
			}
	}
	for (a = n ; a <= 99 ; a++)
	{
		if (a == 98)
		{
			printf("%d\n", a);
		}
		else if (a < 99)
		{
			printf("%d, ", a);
		}
	}
}
