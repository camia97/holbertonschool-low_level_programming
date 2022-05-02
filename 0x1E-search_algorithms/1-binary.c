#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the array
 * @size: the number of elements
 * @value: value to search
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid = (l + r) / 2, i = 0;

	if (array)
	{
		while (l < r)
		{
			for (i = 0; i < size; i++)
			{
				printf("Searching in array: %d,", array[i]);
				printf("\n");
			}
			if (value == array[mid])
			{
				return (mid);
			}
			else if (value < array[mid])
			{
				r = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
			return (-1);
		}
	}
	return (-1);
}
