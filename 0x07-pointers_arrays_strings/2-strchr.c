#include "main.h"

/**
 * _strchr - Locates a character
 * @s: String to check
 * @c: Character to check for
 * Return: Pointer to spot in s, c, or null
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
