#include "main.h"

/**
*_isalpha - checks for alphabetic character
* @c: The character to print
*
* Return: On success 1.
* On error, 0 is returned, and errno is set appropriately.
*/
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	return (1);
	else
	return (0);

}
