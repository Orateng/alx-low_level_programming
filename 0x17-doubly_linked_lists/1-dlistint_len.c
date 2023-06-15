#include "lists.h"
/**
 *dlistint_len - function that prints number of elements in the list
 *@h: Nodes input
 *Return: Node lenght
 */


size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

