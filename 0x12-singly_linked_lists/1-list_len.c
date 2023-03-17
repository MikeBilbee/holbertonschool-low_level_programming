#include "lists.h"

/**
 * list_len - Adds node the head of list_t
 * @h: Node
 * Return: Address of new node or NULL
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
