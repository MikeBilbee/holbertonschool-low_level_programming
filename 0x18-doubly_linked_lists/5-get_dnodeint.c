#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Head
 * @index: Index
 * Return: Address of node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *og = head;
unsigned int itr = 0;

if (head)
{
while (og)
{
if (itr == index)
return (og);
og = og->next;
++itr;
}
}
return (NULL);
}
