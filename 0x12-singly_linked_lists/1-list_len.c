#include "lists.h"
/**
 * list_len - calculate the length of a linked list
 * @h: head of the list
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
