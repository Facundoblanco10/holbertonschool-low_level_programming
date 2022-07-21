#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: header
* @n: data
* Return: the address of the new element or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	else
		new->prev = NULL;
	*head = new;
	return (new);
}
