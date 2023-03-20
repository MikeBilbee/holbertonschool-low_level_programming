#include "lists.h"

/**
 * sum_listint - Sums all data in a linked list
 * @head: Head
 * Return: Sum of the number
*/

int sum_listint(listint_t *head)
{
listint_t *tmp = head;
size_t sum = 0;

while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
