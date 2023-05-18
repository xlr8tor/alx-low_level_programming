#include "lists.h"
/**
 * dlistint_len - counts the number of nodes in a list
 * @h: start of linked list
 *
 * Return: number of nodes in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
