#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: pointer to string
 * @n: number of strings
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int count;
	char *aux;

	va_start(string, n);
	for (count = 0; count < n; count++)
	{
		aux = va_arg(string, char *);
		if (aux == 0)
			printf("(nil)");
		else
			printf("%s", aux);
		if (separator && count < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
