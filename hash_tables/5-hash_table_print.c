#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (j != 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			while (ht->array[i]->next)
			{
				printf(", ");
				node = ht->array[i];
				printf("'%s': '%s'", node->key, node->value);
			}
			j++;
		}
		i++;
	}
	printf("}\n");
}
