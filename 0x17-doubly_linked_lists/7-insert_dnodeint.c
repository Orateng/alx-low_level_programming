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
	unsigned int pos, i = 0;

	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = (*h);

	pos = idx - 1;

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->prev = NULL;
		node->next = (*h);
		if (*h)
			(*h)->prev = node;
		(*h) = node;
		return (*h);
	}

	while (temp && i != pos)
	{
		i++;
		temp = temp->next;
	}

	if (i == pos && temp)
	{
		node->prev = temp;
		node->next = temp->next;
		if (temp->next)
			temp->next->prev = node;
		temp->next = node;
		return (node);
	}
	free(node);
	return (NULL);
}
