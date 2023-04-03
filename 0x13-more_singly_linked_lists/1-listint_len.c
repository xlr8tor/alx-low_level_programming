#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
