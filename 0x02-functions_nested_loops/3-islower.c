#include "main.h"

/**
 * _islower - checks for lower case
 * @c: character
 * Return: always 0
 */
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
else
{
return (0);
}
}
