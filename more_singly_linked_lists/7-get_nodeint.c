#include "lists.h"

/**
* get_nodeint_at_index -  function that returns the nth node of a linked list.
* @head: head
* @index: indice
* Return: the nth node of a linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
