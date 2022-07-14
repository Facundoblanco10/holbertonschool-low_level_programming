#include "lists.h"

/**
* add_nodeint - add a node to the beggining
* @head: pointer to the first node
* @n: node content
* Return: the addres of the new element or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
