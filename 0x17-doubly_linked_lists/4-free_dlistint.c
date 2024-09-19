#include "lists.h"
/**
 * free_dlistint- function to free doubly linked list
 * @head: pointer to head of node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
