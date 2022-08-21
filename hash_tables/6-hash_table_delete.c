#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size = ht->size;
	hash_node_t *node = NULL;
	hash_node_t *temp = NULL;

	if (ht != NULL)
	{
		while (i < size)
		{
			node = ht->array[i];
			while (node)
			{
				temp = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = temp;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
