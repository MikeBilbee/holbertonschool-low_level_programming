#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: New dog, otherwise NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int index, nNam, nOwn;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->age = age;

	while (name[nNam++])
		;
	while (owner[nOwn++])
		;
	new->name = malloc(nNam);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(nOwn);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (index = 0; index < nNam; index++)
	{
		(*new).name[index] = name[index];
	}
	for (index = 0; index < nOwn; index++)
	{
		(*new).owner[index] = owner[index];
	}

	return (new);
}
