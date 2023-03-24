#include "lists.h"
/**
 * add_dnodeint - Adds node to the beginning of a dlistint_t list
 * @head: The old head
 * @n: Number for new node
 * Return: Address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
if (*head)
{
new->next = *head;
new->prev = (*head)->prev;
(*head)->prev = new;
*head = new;
return (*head);
}
new->next = *head;
new->prev = NULL;
*head = new;
return (*head);
}
