#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded or 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	char *dupval = strdup(value);
	char *dupkey = strdup(key);
	unsigned long int index;

	if (!ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	newnode = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = dupkey;
	newnode->value = dupval;

	if (!ht->array[index] || strcmp(ht->array[index]->key, key) == 0)
	{
		if (ht->array[index])
		{
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
		}
	}
	else
		newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}