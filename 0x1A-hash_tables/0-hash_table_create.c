#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));

	ht->size = size;
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
