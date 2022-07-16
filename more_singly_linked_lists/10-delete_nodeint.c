#include "lists.h"

/**
* delete_nodeint_at_index - delete a node at index of a linked list
* @head: head
* @index: indice
* Return: 1 if it succeeded or -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete, *bef;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
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
		delete = bef;
		delete->next = bef->next;
		free(delete);
		bef = bef->next;
		return (1);
	}
	else
		return (-1);
}
