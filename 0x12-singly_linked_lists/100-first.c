#include "lists.h"
#include <stdio.h>
/**
 * cleanupfunc - function that prints before main
 * Return: void
 */
void cleanupfunc(void)
{
	char *str1 = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}
