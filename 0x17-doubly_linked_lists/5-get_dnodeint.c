#include "lists.h"
/**
 * get_dnodeint_at_index - get node at a particular index
 * @head: head
 * @index: position to search
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
