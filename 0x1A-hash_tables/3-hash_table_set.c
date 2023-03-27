#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table
* @ht: Hash table to add or update key
* @key: Key
* @value: Value associated with key
* Return: 1 if successful or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx = 0;
hash_node_t *elem = NULL, *new = NULL;

if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
return (0);

idx = key_index((unsigned char *) key, ht->size);
elem = ht->array[idx];

if (elem && strcmp(key, elem->key) == 0)
{
free(elem->value);
elem->value = strdup(value);
return (1);
}

new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);

new->key = strdup(key);
new->value = strdup(value);
new->next = ht->array[idx];
ht->array[idx] = new;
return (1);
}
