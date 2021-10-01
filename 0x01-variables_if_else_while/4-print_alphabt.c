#include <stdio.h>

/**
*main - void
*Return: 0
*/

int main(void)

{
	int a = 97;

	while (a < 123)
	{
		if (a != 113 && a != 101)
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
