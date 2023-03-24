#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at the end of a dlistint_t list
 * @head: Head
 * @n: Number for node
 * Return: Address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = NULL, *og = NULL;

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
if (*head)
{
og = *head;
while (og->next)
og = og->next;

new->next = NULL;
new->prev = og;
og->next = new;
return (new);
}
new->prev = *head;
new->prev = NULL;
*head = new;
return (*head);
}
