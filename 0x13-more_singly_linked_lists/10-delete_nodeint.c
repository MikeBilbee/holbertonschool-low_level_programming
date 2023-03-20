#include "lists.h"
#include "1-listint_len.c"

/**
* delete_nodeint_at_index - Deletes a node at an index
* @head: Head
* @index: Index
* Return: 1 on success or -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *old = NULL;
listint_t *prev = NULL;
unsigned int i = 0, len = listint_len(*head);

if ((index > len) || (len == 0))
return (-1);
while (head != NULL)
{
if (i == index)
{
old = *head;
if (i == 0)
{
*head = old->next;
free(old);
return (1);
}
prev->next = old->next;
free(old);
return (1);
}
else if ((i + 1) == index)
prev = *head;
head = &((*head)->next);
i++;
}
return (-1);
}
