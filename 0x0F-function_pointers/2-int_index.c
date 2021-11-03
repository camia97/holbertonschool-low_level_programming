#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: pointer to array
 * @size: elements of the array
 * Return: index of cmp or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0 || cmp == 0 || array == 0)
		return (-1);
	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]))
		{
			return (counter);
		}
	}
	return (-1);
}
