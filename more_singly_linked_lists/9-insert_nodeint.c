#include "lists.h"

/**
* insert_nodeint_at_index -  inserts a new node at a given position.
* @head: pointer to the pointer to the start
* @idx: index of the list where the node should be added
* @n: data of the node
* Return: the address of the new node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (*head)
	{
		temp = *head;
		while (temp && i < idx)
		{
			i++;
			temp = temp->next;
		}
	}
	else
		return (NULL);
	new->n = n;
	new->next = temp;
	return (new);
}
