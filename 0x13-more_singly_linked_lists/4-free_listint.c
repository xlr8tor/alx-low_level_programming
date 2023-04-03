#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *curr, *next;

	curr = head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
