#include "lists.h"
/**
 * free_listint - Frees a linked list
 * @head: Head
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
