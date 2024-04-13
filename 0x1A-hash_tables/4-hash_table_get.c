#include "hash_tables.h"
/**
 * hash_table_get -   retrieves a value associated with a key.
 * @ht: the hash table
 * @key:  the key. key can not be an empty string
 * Return: the value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size = 0;

	unsigned long int index = 0;

	hash_node_t *current = NULL;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
