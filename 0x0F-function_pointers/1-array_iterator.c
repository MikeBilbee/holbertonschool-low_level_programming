#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - Iterates an array
 * @size: Array size
 * @action: Pointer to funtion
 * @array: Pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}
}
