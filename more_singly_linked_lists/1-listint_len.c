#include "lists.h"

/**
* listint_len - return the number of elements in a linked list
* @h: list
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
