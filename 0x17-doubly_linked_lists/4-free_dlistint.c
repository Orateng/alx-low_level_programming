#include "lists.h"
/**
 *free_dlistint - function that frees a struct element in memory
 *@head: Nodes starting point
 *Return: new element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *tmp = head;
	int value = 0;

	if (new_node == NULL)
		return;

	new_node->n = value;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = new_node;
		new_node->prev = NULL;
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}
	tmp->next = new_node;
	new_node->prev = tmp;
	free(tmp);

}
