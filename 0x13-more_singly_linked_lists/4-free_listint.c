#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *curr, *next;

	if (head == NULL)
	{
		free(head);
		return;
	}

	curr = head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
