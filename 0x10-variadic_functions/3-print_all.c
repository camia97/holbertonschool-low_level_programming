#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all
 * @format: string
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int count = 0, c = 0;
	va_list elements;
	char *aux, *sep;

	va_start(elements, format);
	sep = ", ";
	while (format && format[c])
	{
		c++;
	}
	while (format && format[count])
	{
		if (count == (c - 1))
			sep = "";
		switch (format[count])
		{
			case ('c'):
				printf("%c%s", va_arg(elements, int), sep);
			break;
			case ('i'):
				printf("%d%s", va_arg(elements, int), sep);
			break;
			case ('s'):
				aux = va_arg(elements, char *);
				if (aux == 0)
				{
					printf("(nil)%s", sep);
					break;
				}
				printf("%s%s", aux, sep);
			break;
			case ('f'):
				printf("%f%s", va_arg(elements, double), sep);
			break;
		}
		count++;
	}
	printf("\n");
	va_end(elements);
}
