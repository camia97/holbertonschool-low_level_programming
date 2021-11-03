#include "main.h"
#include <stdio.h>
/**
 * main- void
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
		for (b = '0'; b <= '9'; b++)
		{
			if(a == b)
			{
				putchar(a);
				putchar(b);
				putchar(' ');
			}
		}
	putchar(a);
	putchar(b);
	putchar(',');
	return (0);
}
