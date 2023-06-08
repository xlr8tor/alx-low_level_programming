#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table being printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		node = ht->array[i];
		while (node != NULL)
		{
			if (comma)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			comma = 1;
		}
	}
	printf("}\n");
}
