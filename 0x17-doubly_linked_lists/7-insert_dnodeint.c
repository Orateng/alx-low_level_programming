#include "lists.h"
/**
 *insert_dnodeint_at_index - Function that inserts a node in its position
 *@h: The start of the node
 *@idx: Count
 *@n: Index for node
 *Return: Null if node list is empty
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = (*h);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = (*h);
		(*h) = node;
		return (NULL);
	}

	temp = (*h);
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}

	node->next = temp->next;
	temp->next = node;
	return ((*h));
}
