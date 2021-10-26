#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional array
 * @width: int
 * @height: int
 * Return: null if fail
 */
int **alloc_grid(int width, int height)
{
	int a;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == 0)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		p[a] = malloc(sizeof(int) * width);
		if (p[a] == 0)
		{
			for (; a >= 0; a--)
				free(p[a]);
			free(p);
			return (0);

		}
	}
	return (p);

}
