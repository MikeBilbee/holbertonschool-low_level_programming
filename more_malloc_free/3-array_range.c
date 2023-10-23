#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: lowest value int
 * @max: highest value int
 * Return: Pointer to array
*/
int *array_range(int min, int max)
{
	int *new;
	size_t index, size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	new = malloc(size * sizeof(*new));

	if (!new)
	{
		return (NULL);
	}

	for (index = 0; index < size && min <= max; index++, min++)
	{
		*(new + index) = min;
	}

	return (new);
}
