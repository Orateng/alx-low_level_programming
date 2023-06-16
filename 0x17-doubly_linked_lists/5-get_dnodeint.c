#include "lists.h"
/**
 *get_dnodeint_at_index - Finds the index of a node
 *@head: Starting point of index input for a node
 *@index: The index of the node indiced
 *Return: Null, if linked list is empty
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node && i != index)
	{
		i++;
		node = node->next;
	}
	if (node && i == index)
		return (node);
	return (NULL);
}
