#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
* @h: list
* Return: the number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
