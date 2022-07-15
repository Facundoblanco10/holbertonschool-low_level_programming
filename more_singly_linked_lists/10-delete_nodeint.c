#include "lists.h"

/**
* delete_nodeint_at_index - delete a node at index of a linked list
* @head: head
* @index: indice
* Return: 1 if it succeeded or -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = *head;
	while (temp && i < index)
	{
		i++;
		temp = temp->next;
	}
	if (!temp)
		return (-1);
	else if (i == index)
	{
		free(temp);
		return (1);
	}
	return (-1);
}
