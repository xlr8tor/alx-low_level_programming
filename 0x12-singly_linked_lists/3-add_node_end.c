#include "lists.h"
/**
 * add_node_end - inserts a new node at the end of a
 * linked list
 * @head: head of the list
 * @str: data to be added
 * Return: pointer to new node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;
	unsigned int len = 0;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	while (str[++len])
		;
	tmp->str = strdup(str);
	tmp->next = NULL;
	tmp->len = len;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = tmp;

	return (tmp);
}
