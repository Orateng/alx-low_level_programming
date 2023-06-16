#include "lists.h"
/**
 *sum_dlistint - Function to sum all nodes in linked list
 *@head: Pointer to the node
 *Return: 0 if list is empty
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
