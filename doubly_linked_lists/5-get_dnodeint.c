#include "lists.h"

/**
*
*
*
*
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i != index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}
