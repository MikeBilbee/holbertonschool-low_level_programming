#include "main.h"
/**
 * _strdup - allocates memory for the given string
 * @str: string to allocate memory for
 * Return: Pointer to string, or NULL
*/
char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		dup[index] = str[index];
		dup[len] = '\0';
	}

	return (dup);
}
