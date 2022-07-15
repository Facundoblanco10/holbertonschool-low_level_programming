#include "lists.h"

/**
* pop_listint - delete the head node of a list
* @head: pointer to the pointer of the first node
* Return: the head node's data (n) or 0
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int hn;

	if (!head)
		return (0);
	ptr = *head;
	hn = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (hn);
}
