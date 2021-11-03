#include "3-calc.h"
#include <stdio.h>
/**
 * main - main
 * @argc: counter
 * @argv: vector
 * Return: int
 */
int main(int argc, char argv[])
{
	if (argc != 4)
	{
		printf(Error);
		exit(98);
	}
	printf("%d", get_op_func(argv[2])(argv[1], argv[3]));
	return (0);
}
