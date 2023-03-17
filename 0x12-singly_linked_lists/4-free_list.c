#include "lists.h"
/**
 * free_list - Frees a list
 * @head: Pointer
 * Return: No Return
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
