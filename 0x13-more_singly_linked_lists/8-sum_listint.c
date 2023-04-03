#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 *
 * Return: 0 | sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (sum);

	ptr = head;
	while (ptr != NULL)
	{
		sum += (ptr->n);
		ptr = ptr->next;
	}

	return (sum);
}
