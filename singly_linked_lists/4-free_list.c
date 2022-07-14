#include "lists.h"

/**
* free_list - function that frees a list
* @head: node
*/

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free(head->next);
		free(head);
	}
}
