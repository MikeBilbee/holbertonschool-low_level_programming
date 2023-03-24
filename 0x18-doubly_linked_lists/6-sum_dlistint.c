#include "lists.h"
/**
 * sum_dlistint - Returns the sum of data of a dlistint_t linked list
 * @head: Head
 * Return: Sum of data
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *og = head;
int sum = 0;

if (head)
{
while (og)
{
sum += og->n;
og = og->next;
}
}
return (sum);
}
