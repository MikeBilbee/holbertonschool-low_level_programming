#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints lower then upper case alphabet
 *
 * Return: always 0
 */
int main(void)
{
char z;

z = 'a';
while (z <= 'z')
{
putchar(z);
z++;
}
z = 'A';
while (z <= 'Z')
{
putchar(z);
z++;
}
putchar('\n');
return (0);
}
