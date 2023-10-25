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

	new = malloc(sizeof(*new));

	if (!new || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}

	for (nNam = 0; name[nNam]; nNam++)
	{
		;
	}

	for (nOwn = 0; owner[nOwn]; nOwn++)
	{
		;
	}

	new->name = malloc(nNam + 1);
	new->owner = malloc(nOwn + 1);

	if (!(new->name) || !(new->owner))
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}

	for (index = 0; index < nNam; index++)
	{
		new->name[index] = name[index];
		new->name[index] = '\0';
	}

	new->age = age;

	for (index = 0; index < nOwn; index++)
	{
		new->owner[index] = owner[index];
		new->owner[index] = '\0';
	}

	return (new);
}
