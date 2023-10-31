#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			for (; x >= 0; x--)
				free(a[x]);

			free(a);

			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			a[x][y] = 0;
	}
	return (a);
}
