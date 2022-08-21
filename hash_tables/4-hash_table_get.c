#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: key you are looking for
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	if (strcmp(ht->array[index]->key, key) != 0)
		ht->array[index] =  ht->array[index]->next;
	return (ht->array[index]->value);
}
