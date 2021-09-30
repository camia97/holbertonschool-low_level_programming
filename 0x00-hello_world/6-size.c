#include <stdio.h>

/**
 *main - print a string
 *Return: 0
 */
int main(void)
{
	int b;
	char a;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of a int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);

}

