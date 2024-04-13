#include "hash_tables.h"
/**
 * hash_table_print -   prints hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *current;

	int flag = 0;

	if (ht == NULL || ht->array == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			flag = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
