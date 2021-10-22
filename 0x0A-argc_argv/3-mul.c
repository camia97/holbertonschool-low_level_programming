#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: pointer string
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argv[1] != 0 && argv[2] != 0)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	(void)argc;
}
