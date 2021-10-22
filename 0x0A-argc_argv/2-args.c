#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: int
 * @argv: char
 * Return: void
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; argv[a]; a++)
	{
		printf("%s\n", argv[a]);
	}
	(void)argc;
	return (0);
}
