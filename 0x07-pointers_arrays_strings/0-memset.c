#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: Memory space
 * @b: byte to fill with
 * @n: number of spaces to fill spaces to fill
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
