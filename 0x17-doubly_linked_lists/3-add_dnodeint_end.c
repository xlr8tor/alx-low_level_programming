#include "lists.h"
/**
 * add_dnodeint_end - inserts node at the end of linked list
 * @head: start of the list
 * @n: data
 *
 * Return: address of newly inserted node || NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->prev = NULL;
	ptr->n = n;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	ptr->prev = temp;

	return (*head);
}
