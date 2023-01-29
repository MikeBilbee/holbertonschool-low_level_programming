#include <stdio.h>

/**
 * main - prints alphabet without q or e
 *
 * Return: always 0
 */
int main(void)
{
char z;
for (z = 'a'; z <= 'z'; z++)
{
if (z != 'e' && z != 'q')
{
putchar (z);
}
}
putchar ('\n');
return (0);
}
