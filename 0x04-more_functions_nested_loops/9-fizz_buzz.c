#include <stdio.h>
/**
 * main - void
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if ((a % 5) == 0 && (a % 3) == 0)
		{
			printf("Fizz Buzz");
			continue;
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a == 100)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
	return (0);
}
