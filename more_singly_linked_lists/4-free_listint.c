#include "lists.h"

/**
* free_listint - free a list
* @head: pointer to the start
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
