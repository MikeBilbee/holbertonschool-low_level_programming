#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: Head
 * Return: Address of new head or 0
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int n = 0;

if (*head)
{
new = (*head)->next;
n = (*head)->n;
free(*head);
*head = new;
}

return (n);
}
