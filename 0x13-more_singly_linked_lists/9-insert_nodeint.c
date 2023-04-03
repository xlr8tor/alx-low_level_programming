#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node
 * @idx: position
 * @n: data
 *
 * Return: pointer of new node || NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *next;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	next = malloc(sizeof(listint_t));
	if (next == NULL)
		return (NULL);
	next->n = n;
	next->next = NULL;

	prev = *head;
	while (count < idx - 1)
	{
		if (prev != NULL)
			prev = prev->next;
		else
			return (NULL);
		count++;
	}
	next->next = prev->next;
	prev->next = next;

	return (next);
}
