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
	int count = 0;
	va_list elements;
	char *aux, *sep;

	va_start(elements, format);
	sep = "";
	while (format && format[count])
	{
		switch (format[count])
		{
			case ('c'):
				printf("%s", sep);
				printf("%c", va_arg(elements, int));
			break;
			case ('i'):
				printf("%s", sep);
				printf("%d", va_arg(elements, int));
			break;
			case ('s'):
				aux = va_arg(elements, char *);
				if (aux == 0)
				{
					printf("%s", sep);
					printf("(nil)");
					break;
				}
				printf("%s", sep);
				printf("%s", aux);
			break;
			case ('f'):
				printf("%s", sep);
				printf("%f", va_arg(elements, double));
			break;
		}
		sep = ", ";
		count++;
	}
	printf("\n");
	va_end(elements);
}
