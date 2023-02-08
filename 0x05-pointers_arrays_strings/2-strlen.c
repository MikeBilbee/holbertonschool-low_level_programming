#include "main.h"

/**
 * _strlen - Length of string
 * @s: is a character
 * Return: i
 */

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
	i++;
return (i);
}

