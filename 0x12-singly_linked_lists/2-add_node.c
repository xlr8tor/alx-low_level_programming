#include "lists.h"
/**
 * add_node - add node to the beginning of linked list
 * @head: head of the linked list
 * @str: data of new node
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int len = 0;

	while (str[++len])
		;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
