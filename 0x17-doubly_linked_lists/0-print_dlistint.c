#include "lists.h"
/**
 * print_dlistint - function to print elements
 *
 * @h: pointer to head of list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
