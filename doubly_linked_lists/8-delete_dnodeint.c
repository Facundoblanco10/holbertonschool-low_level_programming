#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index of a linked list
* @head: head
* @index: index
* Return: 1 if succeeded or -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *delete, *bef, *aft;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (!(*head) || index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		(*head)->prev = NULL;
		return (-1);
	}
	bef = *head;
	while (bef && i != (index - 1))
	{
		if (!bef->next)
			return (-1);
		i++;
		bef = bef->next;
	}
	if (i == (index - 1))
	{
		delete = bef->next;
		aft = delete->next;
		bef->next = aft;
		aft->prev = bef;
		free(delete);
		return (1);
	}
	else
		return (-1);
}
