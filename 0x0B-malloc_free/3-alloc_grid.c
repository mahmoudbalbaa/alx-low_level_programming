#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: holds the width of the grid
 * @height: holds the height of the grid
 * Return: NULL if width or height equals 0 or x if not
 */

int **alloc_grid(int width, int height)
{
	int **x = (int **) malloc(height * sizeof(int *));
	int i;

	if (width == 0 || height == 0 || x == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		x[i] = (int *) malloc(width * sizeof(int));
		if (x[i] == NULL)
			return (NULL);
	}
	return (x);
}
