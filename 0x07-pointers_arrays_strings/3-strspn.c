#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: String to check
 * @accept: String to check against
 * Return: Number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
