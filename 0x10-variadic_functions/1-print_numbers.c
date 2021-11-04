#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: pointer to string to be printed
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pnum;
	unsigned int a;

	va_start(pnum, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", (va_arg(pnum, unsigned int)));
		if (separator && a < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(pnum);
}
