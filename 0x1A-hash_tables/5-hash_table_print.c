#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hold;
	unsigned long int i = 0, index = 0;

	if (ht)
	{
		printf("{");

		for (index = 0; index < ht->size; index++)
		{
			hold = ht->array[index];
			while (hold)
			{
				if (i != 0)
					printf(", ");
				i = 1;
				printf("'%s': '%s'", hold->key, hold->value);
				hold = hold->next;
			}
		}

		printf("}\n");
	}
}
