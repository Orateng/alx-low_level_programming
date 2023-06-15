#include "lists.h"
/**
 *print_dlistint - function that prints nodes
 *@h: Nodes input
 *Return: Node lenght
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

