#include <stdio.h>

/**
*main - void
*Return: 0
*/

int main(void)

{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
		if (a < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
