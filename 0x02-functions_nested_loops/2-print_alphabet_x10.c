#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * return: alwyas 0
 */
void print_alphabet_x10(void)
{
char z;
int n;
for (n = 1; n <= 10; n++)
{
for (z = 'a'; z <= 'z'; z++)
{
_putchar(z);
}
_putchar('n');
}
}
