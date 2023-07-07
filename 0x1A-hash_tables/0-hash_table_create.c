#include "hash_tables.h"

/**
 * hash_table_create - A function to create a hash table
 * @size: Parameter for the sizeof the array
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->size = size;
	return (ht);
}
