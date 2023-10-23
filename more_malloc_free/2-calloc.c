#include "main.h"
/**
 * _calloc - It's calloc()
 * @nmemb: number of members
 * @size: size of memory to allocate
 * Return: None
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	size_t index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	new = malloc(nmemb * size);

	if (!new)
	{
		return (NULL);
	}

	for (index = 0; index < nmemb * size; index++)
	{
		*(new + index) = 0;
	}

	return ((void *)new);
}
