#include "function_pointers.h"
/**
 * array_iterator - executes a given function
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != 0 && size != 0)
	{
	for (a = 0; a < size; a++)
		action(array[a]);
	}
}
