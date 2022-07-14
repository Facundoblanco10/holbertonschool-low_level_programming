#include "lists.h"

/**
* add_node_end - function that adds a new node at the beggining of a list
* @head: header
* @str: string
* Return: the addres of the new element or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		return (*head);
	}
}
