#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: array size
 * @cmp: pointer to function
 * @array: pointer to array
 * Return: Index of first element, otherwise -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp && array)
	{
		if (size <= 0)
		return (-1);

		for (index = 0; index < size; index++)
		if (cmp(array[index]))
		{
		return (index);
		}
	}

	return (-1);
}