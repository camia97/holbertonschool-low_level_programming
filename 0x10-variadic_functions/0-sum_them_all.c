#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all the parameters
 * @n: elements of arg
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int a;
	int sum = 0;

	va_start(num, n);
	if (n == 0)
		return (0);
	for (a = 0; a < n; a++)
		sum += va_arg(num, unsigned int);
	va_end(num);
	return (sum);

}
