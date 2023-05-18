#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: start of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *temp;

	if (head == NULL)
	{
		free(head);
		return;
	}

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
