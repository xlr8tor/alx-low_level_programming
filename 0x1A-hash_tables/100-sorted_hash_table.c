#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	ht->shead = NULL;
	ht->stail = NULL;

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
* shash_table_set - adds an element to a hash table
* @ht: the table you want to add to
* @key: the key
* @value: the value
*
* Return: 1 on success, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *tmp;
	char *val_cpy;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	val_cpy = strdup(value);
	if (!val_cpy)
		return (0);
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val_cpy;
			return (1);
		}
		tmp = tmp->snext;
	}
	node = malloc(sizeof(shash_node_t));
	if (!node)
	{
		free(val_cpy);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(val_cpy);
		free(node);
		return (0);
	}
	node->value = val_cpy;
	node->next = ht->array[index];
	ht->array[index] = node;

	if (!ht->shead)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		node->sprev = tmp;
		node->snext = tmp->snext;
		if (!tmp->snext)
			ht->stail = node;
		else
			tmp->snext->sprev = node;
		tmp->snext = node;
	}
	return (1);
}

/**
* shash_table_get - adds an element from a hash table
* @ht: the table you want to get from
* @key: the key
*
* Return: value on success, NULL otherwise
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints a hash table
 * @ht: the hash table being printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");

	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: the hash table being printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a hash table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	shash_table_t *head = ht;

	if (!ht)
		return;
	node = ht->shead;
	while (node != NULL)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
	free(head->array);
	free(head);
}
