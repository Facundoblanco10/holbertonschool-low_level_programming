#include "lists.h"

/**
* insert_dnodeint_at_index -  inserts a new node at a given position.
* @h: header
* @idx: indice
* @n: data
* Return: the address of the new node or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *bef, *new, *aft;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*h) || idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		*h = new;
		return (new);
	}
	new = *h;
	while (new->next && i != idx)
	{
		i++;
		new = new->next;
	}
	bef = new->prev;
	bef->next = new;
	if (!new->next)
		return (new);
	else
	{
		aft = new->next;
		aft->prev = new;
	}
	return (new);
}
