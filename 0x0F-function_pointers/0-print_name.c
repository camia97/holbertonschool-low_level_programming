#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: pointer to a name
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
