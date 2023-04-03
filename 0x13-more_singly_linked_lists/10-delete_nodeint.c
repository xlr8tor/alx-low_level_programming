#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index index
 * of a listint_t linked list
 * @head: head
 * @index: index
 *
 * Return: pointer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int count = 0;

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
		*head = curr->next;
	else
		prev->next = curr->next;

	free(curr);
	return (1);
}
