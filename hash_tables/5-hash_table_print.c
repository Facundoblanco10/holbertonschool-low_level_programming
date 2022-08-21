#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (j != 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			j++;
		}
		i++;
	}
	printf("}\n");
}
