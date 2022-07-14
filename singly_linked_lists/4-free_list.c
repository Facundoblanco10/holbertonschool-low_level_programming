#include "lists.h"

/**
* free_list - function that frees a list
* @head: node
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
