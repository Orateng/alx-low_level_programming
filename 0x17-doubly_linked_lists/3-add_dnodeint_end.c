#include "lists.h"
/**
 *add_dnodeint_end - function that prints elements in reverse
 *@head: Nodes starting point
 *@n: The value of the node list
 *Return: Null if new element is empty
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
