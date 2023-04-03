#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: first node in linked list
 *
 * Return: size of linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
