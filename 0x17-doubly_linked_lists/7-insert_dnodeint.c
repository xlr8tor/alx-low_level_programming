#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at specied index
 * @h: pointer to head of list
 * @idx: position to insert
 * @n: Data
 *
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *ptr, *next, *prev = NULL;

	next = malloc(sizeof(dlistint_t));
	if (next == NULL || !h)
	{
		free(next);
		return (NULL);
	}
	next->n = n;
	next->next = NULL;
	next->prev = NULL;
	ptr = *h;
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
		next->next = *h;
		if (*h != NULL)
			(*h)->prev = next;
		*h = next;
	}
	else
	{
		prev->next = next;
		next->next = ptr;
		if (ptr != NULL)
			ptr->prev = next;
		next->prev = prev;
	}
	return (next);
}
