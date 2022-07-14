#include "lists.h"

/**
* add_nodeint_end - add a node to the end
* @head: pointer to the first node
* @n: int
* Return: the addres of the new element or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		return (new);
	}
	*head = new;
	return (new);
}
