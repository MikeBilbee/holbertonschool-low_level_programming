#include "lists.h"
/**
 * dlistint_len - Counts number of elements in a doubly linked list
 * @h: Head
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int len = 0;

while (h)
{
++len;
h = h->next;
}
return (len);
}
