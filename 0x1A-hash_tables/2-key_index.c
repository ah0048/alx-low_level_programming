#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key || !size)
		return (0);
	index = hash_djb2(key) % size;
	return (index);
}
