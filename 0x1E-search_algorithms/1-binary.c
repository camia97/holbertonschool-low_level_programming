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
	size_t l = 0, r = size - 1, mid, i = 0;

	while (l < r)
	{
		mid  = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l + 1; i < r + 1; i++)
		{
			printf("%d, ", array[i - 1]);
			if (i == r)
				printf("%d\n", array[i]);
		}
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	printf("Searching in array: %d\n", array[r]);
	return (-1);
	
}
