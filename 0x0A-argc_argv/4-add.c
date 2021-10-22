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
	int word;
	int chw;
	int sum = 0;

	for (word = 1; word < argc; word++)
	{
		for (chw =  0; argv[word][chw] != 0; chw++)
		{
			if (!(argv[word][chw] >= 48 && argv[word][chw] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = atoi(argv[word]) + sum;
	}
	printf("%d\n", sum);
	return (0);

}
