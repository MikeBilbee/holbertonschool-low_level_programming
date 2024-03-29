#include "main.h"
/**
 * create_array - creates an array of chars, initializes with a specific char.
 * @size: size
 * @c: character
 * Return: Pointer to Array, otherwise NULL
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (!array)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
