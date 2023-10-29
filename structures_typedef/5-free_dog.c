#include "dog.h"
/**
 * free_dog - Frees dogs
 * @d: Struct of a dog
 * Return: None
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
