#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * @array: pointer to the first element
 * @size: number of elements of the array
 * @value: value to search
 * Return: the index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
			{
				return (i);
			}
		}
		if (i == size)
		{
			return (-1);
		}
	}
	return (-1);
}
