#include "lists.h"
/**
 * dlistint_len - function to print elements
 *
 * @h: pointer to head of list
 * Return: number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_count = 0;

	while (h)
	{
		elem_count += 1;
		h = h->next;
	}
	return (elem_count);
}
