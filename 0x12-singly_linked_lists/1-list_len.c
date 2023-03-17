#include "lists.h"

/**
 * list_len - Prints length
 * @h: Pointer
 * Return: Elements or NULL
 */
size_t list_len(const list_t *h)
{
size_t elements = 0;

while (h)
{
elements++;
h = h->next;
}

return (elements);

}
