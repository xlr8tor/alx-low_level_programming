#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: index to search in list
 *
 * Return: NULL || pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}

	return (NULL);
}
