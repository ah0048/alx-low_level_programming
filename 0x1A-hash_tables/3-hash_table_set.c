#include "hash_tables.h"
/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: the hash table
 * @key:  the key. key can not be an empty string
 * @value: value must be duplicated. value can be an empty string
 * Return: 1 on success and 0 on failure 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int size = 0;

    unsigned long int index = 0;
    
    hash_node_t *current = NULL, *new_node = NULL;

    if (!ht || !key || !value || strcmp(key, "") == 0)
        return (0);
    size = ht->size;
    index = key_index((unsigned char *)key, size);
    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1);
        }
        current = current->next;
    }
    new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    if (new_node->key == NULL)
        return (0);
    new_node->value = strdup(value);
    if(new_node->value == NULL)
        return (0);
    new_node->next = NULL;
    if (current == NULL)
    {
        current = new_node;
    }
    else
    {
        new_node->next = current;
        current = new_node;
    }
    return (1);
}