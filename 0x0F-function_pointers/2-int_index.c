#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Searches for int
 * @size: Number of elements
 * @cmp: Pointer to function
 * @array: Array
 * Return: Index of first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (cmp && array)
{
if (size <= 0)
return (-1);

for (index = 0; index < size; index++)
if (cmp(array[index]))
return (index);
}
return (-1);
}
