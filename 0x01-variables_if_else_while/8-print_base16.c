#include <stdio.h>

/**
 * main - Prints all numbers of base 16
 *
 * Return: always 0
 */
int main(void)
{
int n;
char z;
for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
for (z = 'a'; z <= 'f'; z++)
putchar(z);
putchar('\n');
return (0);
}
