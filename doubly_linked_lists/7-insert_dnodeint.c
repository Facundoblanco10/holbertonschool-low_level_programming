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
	dlistint_t *bef = *h, *new, *aft;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*h) || idx == 0)
		return (add_dnodeint(h, n));
	while (bef && i != (idx - 1))
	{
		if (!bef->next)
			return (NULL);
		bef = bef->next;
		i++;
	}
	if (!bef->next)
		return (add_dnodeint_end(h, n));
	aft = bef->next;
	new->prev = bef;
	new->next = aft;
	bef->next = new;
	aft->prev = new;
	return (new);
}
