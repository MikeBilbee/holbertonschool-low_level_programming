#include "main.h"
/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: Pointer to new memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	size_t len = n, index;

	if (!s1)
	{
		s1 = "";
	}

	if (!s2)
	{
		s2 = "";
	}

	for (index = 0; s1[index]; index++)
	{
		len++;
	}

	new = malloc(sizeof(char) * (len + 1));

	if (!new)
	{
		return (NULL);
	}

	len = 0;

	for (index = 0; s1[index]; index++)
	{
		new[len++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
	{
		new[len++] = s2[index];
	}

	new[len++] = '\0';
	return (new);
}
