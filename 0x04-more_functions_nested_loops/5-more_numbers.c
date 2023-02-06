#include "main.h"

/**
 * more_numbers - Prints 10x numbers 0-14
 * Return: Always 0
 */
void more_numbers(void)
{
int n, p;
for (n = 0; n < 10 ; n++)
{
for (p = 0; p < 15; p++)
{
if (p >= 10)
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');
}
_putchar('\n');
}
}
