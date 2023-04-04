#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head node
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		temp = current->next;
		count++;

		if (current <= temp)
		{
			current->next = NULL;
			free(current);
			break;
		}
		free(current);
		current = temp;

	}

	*h = NULL;
	return (count);
}
