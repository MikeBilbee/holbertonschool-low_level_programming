#include "function_pointers.h"
/**
 * array_iterator - iterates through an array
 * @size: array size
 * @action: pointer to function
 * @array: pointer to array
 * Return: None
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
