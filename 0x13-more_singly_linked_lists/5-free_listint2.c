#include "lists.h"
#include "4-free_listint.c"
/**
 * free_listint2 - Frees a linked list
 * @head: Head
 */
void free_listint2(listint_t **head)
{
if (!(head))
{
return;
}
free_listint(*head);
*head = NULL;
}
