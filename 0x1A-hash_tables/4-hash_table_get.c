#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hold;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	hold = ht->array[index];

	for (; hold != NULL; hold = hold->next)
	{
		if (strcmp(key, hold->key) == 0)
			return (hold->value);
	}

	return (NULL);
}
