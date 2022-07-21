#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: head
* @index: index of the node starting from 0
* Return: NULL or returns the nth node of a dlistint_t linked list.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i != index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}
