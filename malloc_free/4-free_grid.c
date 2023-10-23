#include "main.h"
/**
 * free_grid - Frees array at pointer returned by alloc_grid()
 * @grid: array 
 * @height: grid height
 * Return: None
*/
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}

	free(grid);
}
