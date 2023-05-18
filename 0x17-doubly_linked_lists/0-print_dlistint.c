#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: first node in linked list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t count = 0;

	if (h == NULL)
		return (count);

	head = h;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
