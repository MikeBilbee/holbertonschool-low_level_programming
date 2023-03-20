#include "lists.h"
/**
 * add_nodeint - Adds node to beging of a linked list
 * @head: Head of list
 * @n: New node
 * Return: Address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));

if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
