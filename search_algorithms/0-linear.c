#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers linearly
 * @array: Pointer to array to be searched
 * @size: Size of array
 * @value: Value being searched for
 * Return: Index to value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}

	return (-1);
}
