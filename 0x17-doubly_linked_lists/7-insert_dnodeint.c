#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: double pointer to new node
 * @idx: index position of new node
 * @n: data of new node
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	size_t seq = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (seq = 1; seq < idx; seq++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
