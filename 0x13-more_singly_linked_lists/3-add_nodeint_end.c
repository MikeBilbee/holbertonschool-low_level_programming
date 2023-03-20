#include "lists.h"
/**
 * add_nodeint_end - Adds node to the end of a linked list
 * @head: Head
 * @n: New node
 * Return: Address of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_t *h = *head;

if (new)
{
new->n = n;
new->next = NULL;
}
else
return (NULL);

if (h)
{
while (h->next != NULL)
h = h->next;
h->next = new;
}
else
*head = new;
return (new);
}
