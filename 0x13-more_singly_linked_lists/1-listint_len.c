#include "lists.h"
/**
 * listint_len - Counts number of elements in a linked list
 * @h: Head
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}
return (count);
}
