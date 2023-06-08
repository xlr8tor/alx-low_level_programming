#include "hash_tables.h"
/**
 * create_item - creates a hash table entry
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 *
 * Return: pointer to new hash_node_t
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *ht_item = malloc(sizeof(hash_node_t));

	if (!ht_item)
		return (NULL);
	ht_item->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!ht_item->key)
	{
		free(ht_item);
		return (NULL);
	}
	ht_item->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (!ht_item->value)
	{
		free(ht_item->key);
		free(ht_item);
		return (NULL);
	}
	ht_item->next = NULL;
	strcpy(ht_item->key, key);
	strcpy(ht_item->value, value);

	return (ht_item);

}
/**
* hash_table_set - adds an element to a hash table
* @ht: the table you want to add to
* @key: the key
* @value: the value
*
* Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, j;
	hash_node_t *ht_item;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	ht_item = create_item(key, value);
	i = key_index((unsigned char *)key, ht->size);

	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = strdup(value);
			free(ht_item->key);
			free(ht_item->value);
			free(ht_item);
			return (1);
		}
	}
	if (!ht_item)
		return (0);
	ht_item->next = ht->array[i];
	ht->array[i] = ht_item;
	return (1);
}
