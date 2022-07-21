#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n) of a linked list.
* @head: head
* Return: 0 or returns the sum of all the data (n)
*/

int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
