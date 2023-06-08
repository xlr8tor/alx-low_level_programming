#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to generate hash value
 * @size: size is the size of the array of the hash table
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % size);
}
