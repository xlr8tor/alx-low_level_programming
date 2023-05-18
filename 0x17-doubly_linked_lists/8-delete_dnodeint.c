#include "lists.h"
/**
 * delete_dnodeint_at_index - at specific index
 * @head: pointer to start of list
 * @index: position to delete
 *
 * Return: 1 || -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *prev, *curr;

	if (*head == NULL)
		return (-1);
	curr = *head;
	prev = NULL;

	while (curr != NULL && count < index)
	{
		prev = curr;
		curr = curr->next;
		count++;
	}
	if (curr == NULL)
		return (-1);

	if (prev == NULL)
	{
		*head = curr->next;
		if (curr->next != NULL)
			curr->next->prev = NULL;
	}
	else
	{
		prev->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = prev;
	}
	free(curr);
	return (1);
}
