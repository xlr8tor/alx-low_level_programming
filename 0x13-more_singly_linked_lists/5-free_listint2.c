#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *next;

	if (head == NULL)
		return;

	curr = *head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
}
