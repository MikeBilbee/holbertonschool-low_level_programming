#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to first element of the array
 * @size: Number of elements
 * @value: Value to search for
 * Return: Index to value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int min = 0, max = size - 1, mid = 0;

	if (!array || size == 0)
	{
		return (-1);
	}

	while (min <= max)
	{
		mid = (min + max) / 2;
	
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i == max)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			min = mid + 1;
		}
		else
		{
			max = mid - 1;
		}
	}

	return (-1);
}
