#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 *
 * Return: NULL || pointer to start of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);

	tortoise = hare = head;

	while (hare && hare->next)
	{
		tortoise = head->next;
		hare = head->next->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
		}
			return (hare);
	}
	return (NULL);
}
