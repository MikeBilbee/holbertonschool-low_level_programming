#include "hash_tables.h"
/**
* key_index - omputes the index of a given key in a hash table
* @key: Key
* @size: Size
* Return: Index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
