#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a linked list.
* @head: head
*
* Return: res
*/

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
