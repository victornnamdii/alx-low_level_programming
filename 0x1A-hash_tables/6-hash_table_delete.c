#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *hold;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		hold = ht->array[i];
		while (hold)
		{
			tmp = hold->next;
			free(hold->key);
			free(hold->value);
			free(hold);
			hold = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
