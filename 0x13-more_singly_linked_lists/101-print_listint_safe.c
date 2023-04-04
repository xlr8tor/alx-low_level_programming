#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of list
 *
 * Return: 98 || number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		/* check if next node points back to a previous node */
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (count);
}
