#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of list
 * @n: data
 *
 * Return: pointer of new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *curr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = ptr;

	return (*head);
}
