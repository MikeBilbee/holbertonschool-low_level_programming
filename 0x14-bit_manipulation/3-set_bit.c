#include "main.h"
/**
 * set_bit - Sets a bit to 1
 * @n: Number
 * @index: Index to be set
 * Return: 1 on success or -1 on failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);

(*n |= (1 << index));
return (1);
}
