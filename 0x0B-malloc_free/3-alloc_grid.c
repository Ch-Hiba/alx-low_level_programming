#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: NULL on failure, width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int x, y, a, b;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));

		/* making a malloc per pointer */

		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (x = 0; x < height; x++)
		{
			p[x] = (int *) malloc(width * sizeof(int));
			if (!p[x])
			{
				for (y = 0; y <= x; y++)
					free(p[y]);
				free(p);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				p[a][b] = 0;
			}
		}
		return (p);
	}
}
