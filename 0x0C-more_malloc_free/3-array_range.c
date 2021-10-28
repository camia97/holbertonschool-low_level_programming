#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of ints
 * @min: int min
 * @max: int max
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int v, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == 0)
		return (NULL);
	for (v = 0; v < max - min + 1; v++)
		ptr[v] = min + v;
	return (ptr);
}
