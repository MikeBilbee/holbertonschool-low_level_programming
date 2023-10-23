#include "main.h"
/**
 * malloc_checked - Allocates memory (its malloc())
 * @b: data to be allocated 
 * Return: Pointer to memory
*/
void *malloc_checked(unsigned int b)
{
	void *new = malloc(b);

	if (!new)
	{
		free(new);
		exit(98);
	}

	return (new);
}
