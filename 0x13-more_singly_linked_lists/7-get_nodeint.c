#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Head
 * @index: Element to find
 * Return: Nth node of the list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp = head;
unsigned int i = 0;

while (tmp)
{
if (i == index)
return (tmp);
tmp = tmp->next;
i++;
}
return (NULL);
}
