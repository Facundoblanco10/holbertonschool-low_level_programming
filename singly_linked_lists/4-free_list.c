#include "lists.h"

/**
* free_list - function that frees a list
* @head: node
*/

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head->next);
		head = head->next;
	}
		free(head);
}
