#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: new locates
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_arr;

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	n_arr = malloc(new_size);

	if (n_arr == 0)
		return (NULL);

	if (!ptr)
	{
		return (n_arr);

	}

	n_arr = memcpy(n_arr, ptr, old_size);
	free(ptr);
	return (n_arr);
}
