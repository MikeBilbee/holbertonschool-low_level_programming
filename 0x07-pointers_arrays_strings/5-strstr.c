#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to check for needle
 * @needle: substring to find in haystack
 * Return: Pointer to beginning of needle and haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;
while (haystack[i])
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
return (haystack + i);
}
return (0);
}
