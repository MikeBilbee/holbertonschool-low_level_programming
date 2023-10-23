#include "main.h"
/**
 * alloc_grid - Allocates memory for a 2D array
 * @width: grid width
 * @height: grid height
 * Return: Pointer to an array, otherwise NULL
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (!grid)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}
