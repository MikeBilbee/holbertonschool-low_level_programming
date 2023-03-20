#include "lists.h"
/**
 * print_listint - Prints all elements in a linked list
 * @h: Head
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *tmp = h;
int count = 0;

while (tmp)
{
printf("%d\n", tmp->n);
count += 1;
tmp = tmp->next;
count++;
}
return (count);
}
