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
	listint_t *ptr = *head, *prev = NULL, *next;
	unsigned int count = 0;

	next = malloc(sizeof(listint_t));
	if (!head || !next)
	{
		free(next);
		return (NULL);
	}
	next->n = n;
	next->next = NULL;

	while (ptr != NULL && count < idx)
	{
		prev = ptr;
		ptr = ptr->next;
		count++;
	}
	if (count < idx)
	{
		free(next);
		return (NULL);
	}
	if (prev == NULL)
	{
		next->next = *head;
		*head = next;
	}
	else
	{
		prev->next = next;
		next->next = ptr;
	}
	return (next);
}
