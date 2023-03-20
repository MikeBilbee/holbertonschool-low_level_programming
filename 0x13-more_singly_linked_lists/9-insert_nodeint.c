#include "lists.h"
/**
 * insert_nodeint_at_index - Returns nth node of a linked list
 * @head: Head
 * @idx: Index
 * @n: New node
 * Return: Address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp = *head;
listint_t *new = malloc(sizeof(*new));
unsigned int i = 0;

if (!new)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

while (tmp)
{
if (i == idx - 1)
break;
i++;
tmp = tmp->next;
}

if (i < idx - 1)
return (NULL);

new->next = tmp->next;
tmp->next = new;

return (new);
}
