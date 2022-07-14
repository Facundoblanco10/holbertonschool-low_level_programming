#include "lists.h"

/**
* print_listint - print all the elements of a list
* @h: list
*
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
