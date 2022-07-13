#include "lists.h"

/**
* add_node - function that adds a new node at the beggining of a list
* @head: header
* @str: string
* Return: the addres of the new element or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
