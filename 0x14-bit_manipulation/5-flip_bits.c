#include "main.h"
/**
 * flip_bits - Returns number of flipped bits needed to change a number
 * @n: Original number
 * @m: New number
 * Return: Number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flp = n ^ m;
int count = 0;

while (flp)
{
if (flp & 1)
count++;
flp >>= 1;
}
return (count);
}
