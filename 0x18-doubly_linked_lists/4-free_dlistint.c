#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *og = head, *tmp = NULL;

while (og)
{
tmp = og->next;
free(og);
og = tmp;
}
}
