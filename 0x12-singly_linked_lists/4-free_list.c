#include "lists.h"
/**
 * free_list - deallocates memory used by a linked list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *ptr = NULL;
	list_t *next;

	if (head == NULL)
	{
		free(head);
		return;
	}

	ptr = head;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
