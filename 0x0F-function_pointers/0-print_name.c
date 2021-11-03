#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: pointer to a name
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int larg;

	for (larg = 0; name[larg] != '\0'; larg++)
	{
		_putchar(name[larg]);
	}
	f = ;

}
