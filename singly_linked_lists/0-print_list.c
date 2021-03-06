#include "lists.h"

/**
* print_list - prints all the element of a list
* @h: list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int c = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		c++;
		h = h->next;
	}
	return (c);
}
