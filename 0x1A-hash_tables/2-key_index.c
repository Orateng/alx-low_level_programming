#include "hash_tables.h"

/**
 * key_index - Implementation of the djb2 to search hash table
 * @key: The index key
 * @size: Size of the array of the hash table
 * Return: Returns index at of the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
