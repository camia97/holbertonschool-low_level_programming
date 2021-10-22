#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: int
 * @argv: char
 * Return: void
 */
int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	(void)argv;
	return (0);
}
