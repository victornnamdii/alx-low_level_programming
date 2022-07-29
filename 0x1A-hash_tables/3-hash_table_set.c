#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: he hash table you want to add or update the
 * key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *new;

	if (!ht || !value || !key)
		return (0);
	if (strlen(key) == 0)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *) key, size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
