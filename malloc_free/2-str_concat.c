#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to string, or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	int index1, index2 = 0, len = 0;

	if (!s1)
	{
		s1 = "";
	}

	if (!s2)
	{
		s2 = "";
	}

	for (index1 = 0; s1[index1] || s2[index1]; index1++)
	{
		len++;
	}

	new = malloc(sizeof(char) * len);

	if (!new)
	{
		return (NULL);
	}

	for (index1 = 0; s1[index1]; index1++)
	{
		new[index2++] = s1[index1];
	}

	for (index1 = 0; s2[index1]; index1++)
	{
		new[index2++] = s2[index1];
	}

	return (new);
}
