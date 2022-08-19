#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: NULL or a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_ht;

	n_ht = malloc(sizeof(hash_table_t));
	if (!n_ht)
		return (NULL);
	n_ht->size = size;
	n_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!n_ht)
		return (NULL);
	return (n_ht);
}
